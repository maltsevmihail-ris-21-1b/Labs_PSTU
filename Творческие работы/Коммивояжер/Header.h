#pragma once
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

const int maxSize = 15;

template<class T>
class Graph
{
public:
	Graph();
	void DrawGraph();
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void InsertVertex(const T& vertex);
	void DeleteVertex(const int& vert);
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	int GetAmountVerts();
	int GetWeight(const T& vertex1, const T& vertex2);
	vector<T> GetNbrs(const T& vertex);
	void Print();
	void firstGraph();
	friend void SolveFunc(int*** mat, int n, int** help, int* result);
	friend void drawVertex(int n);
	friend void mouseClick(int btn, int stat, int x, int y);
	friend void drawMenu();
	friend void solve(int*** mat, int n, int** help, int* path);
	int adjMatrix[maxSize][maxSize] = { 0 };
	~Graph();
private:
	vector<T> vertList;
	vector<T> labelList;
	bool* visitedVerts = new bool[vertList.size()];
};
Graph<int> graph;

int n;
int** help;
int* result;
int*** mat;

int WinW;
int WinH;

int amountVerts;
bool flag;
int R;
int RES = 0;
string a;
string PR[maxSize];

struct vertCoord
{
	int x;
	int y;
} vertC[15];

template <class T>
void Graph<T>::firstGraph()
{
	amountVerts = 6;
	for (int i = 1; i <= amountVerts; i++)
	{
		this->InsertVertex(i);
	}
	this->InsertEdge(1, 2, 11);
	this->InsertEdge(2, 4, 6);
	this->InsertEdge(4, 5, 15);
	this->InsertEdge(4, 3, 8);
	this->InsertEdge(5, 3, 3);
	this->InsertEdge(3, 6, 20);
	this->InsertEdge(6, 1, 21);
	this->InsertEdge(1, 3, 19);
}

void podg(int***& mat, int& n, int**& help, int*& result) // подготовка данных
{
	n = amountVerts;

	help = new int* [n];

	result = new int[n];

	mat = new int** [n];

	for (int i = 0; i <= n; i++)
	{
		help[i] = new int[n] {0};
	}

	for (int i = 0; i < n; i++)
	{
		mat[i] = new int* [n];
		for (int j = 0; j < n; j++)
		{
			if (graph.adjMatrix[i][j] == 0)
			{
				mat[i][j] = nullptr;
			}
			else
			{
				mat[i][j] = new int(graph.adjMatrix[i][j]);
			}
		}
	}
}

void solve(int*** mat, int n, int** help, int* path) // поиск оптимального пути
{
	for (int l = 0; l < n; l++)
	{
		for (int i = 0; i < n; i++)
		{
			int min = 1000000;
			for (int j = 0; j < n; j++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];
			for (int j = 0; j < n; j++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}
		for (int j = 0; j < n; j++)
		{
			int min = 1000000;
			for (int i = 0; i < n; i++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];
			for (int i = 0; i < n; i++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mat[i][j] && !*mat[i][j])
				{
					int hmin = 1000000;
					int vmin = 1000000;

					for (int l = 0; l < n; l++)
						if (l != i && mat[l][j] && hmin > *mat[l][j])
							hmin = *mat[l][j];

					for (int l = 0; l < n; l++)
						if (l != j && mat[i][l] && vmin > *mat[i][l])
							vmin = *mat[i][l];

					help[i][j] = hmin + vmin;
				}
			}
		}

		int mcost = 0, mi = 0, mj = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (mat[i][j] && mcost < help[i][j])
				{
					mcost = help[i][j];
					mi = i;
					mj = j;
				}
		path[mi] = mj;

		for (int i = 0; i < n; i++)
			mat[i][mj] = nullptr;

		for (int i = 0; i < n; i++)
			mat[mi][i] = nullptr;

		mat[mj][mi] = nullptr;
	}
}

void SolveFunc(int*** mat, int n, int** help, int* result) //вывод и сохранение решения
{
	flag = false;
	a = "";
	podg(mat, n, help, result);
	int s = 0;
	solve(mat, n, help, result);
	cout << endl << "Части пути: ";

	for (int i = 0, j = 0; i < n; i++)
	{
		j = result[i];
		if (j >= 0)
		{
			cout << graph.vertList[i] << " -> " << graph.vertList[j] << "  ";
			s += graph.adjMatrix[i][j];
		}		
		else
		{
			flag = true;
		}
	}
	if (!flag)
	{
		cout << endl << endl << "Наименьший путь: ";
		int temp = 0;
		for (int l = 0; l < n;)
		{
			for (int i = 0, j = 0; i < n; i++)
			{
				if (temp == 0 || i + 1 == temp)
				{
					if (temp == 0)
					{
						cout << graph.vertList[i];
						a += std::to_string(graph.vertList[i]);
					}
					j = result[i];
					temp = j + 1;
					if (temp > 0)
					{
						a += " -> ";
						a += std::to_string(graph.vertList[j]);
						cout << "  -> " << graph.vertList[j];
					}
					l++;
				}
			}
		}
		RES = s;
		cout << endl << "Наименьшее расстояние: " << s;
		cout << endl;
	}
}

template<class T>
std::vector<T> Graph<T>::GetNbrs(const T& vertex)
{
	std::vector<T> nbrsList; 
	int vertPos = this->GetVertPos(vertex); 
	if (vertPos != (-1))
	{
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			if (this->adjMatrix[vertPos][i] != 0 && this->adjMatrix[i][vertPos] != 0) 
			{
				nbrsList.push_back(this->vertList[i]);
			}
		}
	}
	return nbrsList;
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex)
{
	if (!this->IsFull())
	{
		int pos = this->GetVertPos(vertex);
		if (pos == -1)
		{
			this->vertList.push_back(vertex);
		}
		else
		{
			cout << "Вершина уже существует" << endl;
		}
	}
	else
	{
		cout << "Граф уже заполнен. Невозможно добавить новую вершину " << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteVertex(const int& vert)
{
	int verT = vert - 1;
	int pos = this->GetVertPos(vert);
	if (pos != -1)
	{
		this->vertList.erase(vertList.begin() + pos);
		for (int i = 0; i < maxSize - 1; i++)
		{
			for (int j = 0; j < maxSize - 1; j++)
			{
				if (j < verT && i < verT)
				{
					adjMatrix[i][j] = adjMatrix[i][j];
				}
				else if (j >= verT && i < verT)
				{
					adjMatrix[i][j] = adjMatrix[i][j + 1];
				}

				else if (j < verT && i >= verT)
				{
					adjMatrix[i][j] = adjMatrix[i + 1][j];
				}
				else if (j >= verT && i >= verT)
				{
					adjMatrix[i][j] = adjMatrix[i + 1][j + 1];
				}
			}
		}
	}
}

template<class T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2)
{
	if (!this->IsEmpty())
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	return 0;
}

template<class T>
int Graph<T>::GetAmountVerts()
{
	return this->vertList.size();
}

template<class T>
bool Graph<T>::IsEmpty()
{
	return (this->vertList.size() == 0);
}

template<class T>
bool Graph<T>::IsFull()
{
	return (vertList.size() == maxSize);
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex)
{
	for (int i = 0; i < this->vertList.size(); ++i)
	{
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}

template<class T>
Graph<T>::Graph() {
	for (int i = 0; i < maxSize; ++i)
	{
		for (int j = 0; j < maxSize; ++j)
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph()
{
}

Graph<int> makeGraph()
{
	Graph<int> graph; 
	int amountEdges, sourceVertex, targetVertex, edgeWeight; 
	cout << "Введите количество вершин графа: ";
	cin >> amountVerts; cout << endl;
	cout << "Введите количество ребер графа: "; 
	cin >> amountEdges; cout << endl;
	for (int i = 1; i <= amountVerts; ++i) 
	{
		cout << endl << "Веришна: ";
		cin >> sourceVertex;
		graph.InsertVertex(sourceVertex);
	}
	for (int i = 0; i < amountEdges; ++i) 
	{
		cout << endl << "Исходная вершина: "; 
		cin >> sourceVertex; cout << endl;
		cout << "Конечная вершина: "; 
		cin >> targetVertex; cout << endl; 

		cout << "Вес ребра: "; 
		cin >> edgeWeight; cout << endl; 
		graph.InsertEdge(sourceVertex, targetVertex, edgeWeight);
	}
	cout << endl;
	return graph;
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight)
{
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0 && this->adjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "Ребро между вершинами уже есть" << endl;
			return;
		}
		else
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
			//this->adjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else
	{
		cout << "Обеих вершин (или одной из них) нет в графе " << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print()
{
	if (!this->IsEmpty())
	{
		cout << "-\t";
		for (int i = 0; i < this->vertList.size(); i++)
		{
			cout << vertList[i] << "\t";
		}
		cout << endl << endl;
		for (int i = 0; i < this->vertList.size(); i++)
		{
			cout << vertList[i] << "\t";
			for (int j = 0; j < this->vertList.size(); j++)
			{
				cout << this->adjMatrix[i][j] << "\t";
			}
			cout << endl << endl;
		}
	}
	else
	{
		cout << "Graph is Empty" << endl;
	}
}

void setCoord(int i, int n)
{
	int R_;

	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 13) / n - 20;
		R_ = WinH / 2 - R - 20;
	}
	else
	{
		R = 5 * (WinW / 13) / n - 10;
		R_ = WinW / 2 - R - 10;
	}
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = R_ * cos(theta) + y0;
	float x1 = R_ * sin(theta) + x0;

	vertC[i].x = x1;
	vertC[i].y = y1;
}

void drawCircle(int x, int y, int R) 
{
	glColor3f(0.363, 0.53, 0);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0, 0, 0);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawText(int nom, int x1, int y1)
{
	glColor3f(0.53, 0.71, 0.8);
	GLvoid* font = GLUT_BITMAP_TIMES_ROMAN_24;
	string s = to_string(nom);
	glRasterPos2i(x1 - 7, y1 - 5);
	for (int j = 0; j < s.length(); j++)
	{
		glutBitmapCharacter(font, s[j]);
	}
}

void drawLineText(int nom, int x1, int y1)
{
	glColor3f(1, 0, 0.855);
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(nom);
	glRasterPos2i(x1 - 7, y1 - 5);
	for (int j = 0; j < s.length(); j++)
	{
		glutBitmapCharacter(font, s[j]);
	}
}

void drawVertex(int n)
{
	for (int i = 0; i < n; i++)
	{
		drawCircle(vertC[i].x, vertC[i].y, R);
		drawText(graph.vertList[i], vertC[i].x, vertC[i].y);
	}
}

void drawLine(int text, int x0, int y0, int x1, int y1)
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i((21 * x0 + 107 * x1) / 128, (21 * y0 + 107 * y1) / 128);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i((13 * x0 + 115 * x1) / 128, (13 * y0 + 115 * y1) / 128);
	glEnd();

	drawLineText(text, (x0+7*x1) / 8, (y0 + 7*y1) / 8);

}

template<class T>
void Graph<T>::DrawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int a = adjMatrix[i][j];
			if (a != 0 && i != j)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	drawVertex(n);
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void drawMenuText(string text, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_TIMES_ROMAN_24;
	string s = text;
	glRasterPos2i(x1 + 5, y1 - 20);
	for (int j = 0; j < s.length(); j++)
	{
		glutBitmapCharacter(font, s[j]);
	}
}

void drawMenu()
{
	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 532);
	glVertex2i(3, 568);
	glVertex2i(163, 568);
	glVertex2i(163, 532);
	glEnd();
	glColor3d(0.435, 0.454, 1);
	glBegin(GL_QUADS);
	glVertex2i(5, 535);
	glVertex2i(160, 535);
	glVertex2i(160, 565);
	glVertex2i(5, 565);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Insert element", 5, 560);

	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 692);
	glVertex2i(3, 728);
	glVertex2i(163, 728);
	glVertex2i(163, 692);
	glEnd();
	glColor3d(0.435, 0.454, 1);
	glBegin(GL_QUADS);
	glVertex2i(5, 695);
	glVertex2i(5, 725);
	glVertex2i(160, 725);
	glVertex2i(160, 695);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Solve", 5, 720);

	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 652);
	glVertex2i(3, 688);
	glVertex2i(163, 688);
	glVertex2i(163, 652);
	glEnd();
	glColor3d(0.435, 0.454, 1);
	glBegin(GL_QUADS);
	glVertex2i(5, 655);
	glVertex2i(5, 685);
	glVertex2i(160, 685);
	glVertex2i(160, 655);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("New matrix", 5, 680);

	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 612);
	glVertex2i(3, 648);
	glVertex2i(163, 648);
	glVertex2i(163, 612);
	glEnd();
	glColor3d(0.435, 0.454, 1);
	glBegin(GL_QUADS);
	glVertex2i(5, 615);
	glVertex2i(5, 645);
	glVertex2i(160, 645);
	glVertex2i(160, 615);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Set edge", 5,640);

	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 572);
	glVertex2i(3, 608);
	glVertex2i(163, 608);
	glVertex2i(163, 572);
	glEnd();
	glColor3d(0.435, 0.454, 1);
	glBegin(GL_QUADS);
	glVertex2i(5, 575);
	glVertex2i(5 , 605);
	glVertex2i(160, 605);
	glVertex2i(160,575);
	glEnd();
	glColor3d(0.8, 1.0, 0.9);
	drawMenuText("Delete element", 5, 600);


	glColor3d(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(3, 308);
	glVertex2i(amountVerts * 50 + 53, 308);
	glVertex2i(amountVerts * 50 + 53, 262 - amountVerts * 25);
	glVertex2i(3, 262 - amountVerts * 25);
	glEnd();
	glColor3d(0.353, 0.702, 0.31);
	glBegin(GL_QUADS);
	glVertex2i(5, 305);
	glVertex2i(amountVerts* 50 + 50, 305);
	glVertex2i(amountVerts * 50 + 50, 265 - amountVerts * 25);
	glVertex2i(5, 265 - amountVerts * 25);
	glEnd();

	for (int i = 0; i < maxSize; i++)
	{
		PR[i] = "";
	}
	PR[0] += "-      ";
	for (int i = 0; i < graph.vertList.size(); i++)
	{
		PR[0] += to_string(graph.vertList[i]);
		if (graph.vertList[i] > 9)
		{
			PR[0] += "    ";
		}
		else
		{
			PR[0] += "      ";
		}
	}
	for (int i = 0; i < graph.vertList.size(); i++)
	{
		PR[i + 1] += to_string(graph.vertList[i]);
		if (graph.vertList[i] > 9)
		{
			PR[i + 1] += "    ";
		}
		else
		{
			PR[i + 1] += "      ";
		}
		for (int j = 0; j < graph.vertList.size(); j++)
		{
			PR[i + 1] += to_string(graph.adjMatrix[i][j]);
			if (graph.adjMatrix[i][j] > 9)
			{
				PR[i + 1] += "    ";
			}
			else
			{
				PR[i + 1] += "      ";
			}
		}
	}
	glColor3d(0.8, 1.0, 0.9);
	for (int i = 0; i <= amountVerts + 1; i++)
	{
		drawMenuText(PR[i], 10, 300 - i * 25);
	}
	if (!flag)
	{
		if (a != "")
		{
			glColor3d(0, 0, 0);
			glBegin(GL_QUADS);
			glVertex2i(3, 3);
			glVertex2i(amountVerts * 65 + 18, 3);
			glVertex2i(amountVerts * 65 + 18, 58);
			glVertex2i(3, 58);
			glEnd();
			glColor3d(0.55, 0.1216, 0.22);
			glBegin(GL_QUADS);
			glVertex2i(5, 5);
			glVertex2i(amountVerts * 65 + 15, 5);
			glVertex2i(amountVerts * 65 + 15, 55);
			glVertex2i(5, 55);
			glEnd();
			glColor3d(0.8, 1.0, 0.9);
			std::string ANS = "Way: ";
			ANS += a;
			drawMenuText(ANS, 5, 53);
			std:string DIST = "Distance: ";
			DIST += to_string(RES);
			drawMenuText(DIST, 5, 30);
		}
	}
	else
	{
		glColor3d(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(3, 3);
		glVertex2i(343, 3);
		glVertex2i(343, 58);
		glVertex2i(3, 58);
		glEnd();
		glColor3d(0.55, 0.1216, 0.22);
		glBegin(GL_QUADS);
		glVertex2i(5, 5);
		glVertex2i(340, 5);
		glVertex2i(340, 55);
		glVertex2i(5, 55);
		glEnd();
		glColor3d(0.8, 1.0, 0.9);
		string str = "The graph was built incorrectly!";
		drawMenuText(str, 5, 40);
	}
}

void mouseClick(int btn, int stat, int x, int y)
{
	if (stat == GLUT_DOWN)
	{
		if (x >= 5 && x < 160 && y >  5 && y < 40)
		{
			SolveFunc(mat, n, help, result);
		}
		if (x > 5 && x < 160 && y > 45 && y < 80)
		{
			graph = makeGraph();
		}
		if (x > 5 && x < 160 && y >  85 && y < 120)
		{
			int sourceVertex;
			int targetVertex;
			int edgeWeight;
			bool f = true;
			cout << endl << "Исходная вершина: "; 
			cin >> sourceVertex; cout << endl;
			cout << "Конечная вершина: ";
			cin >> targetVertex; cout << endl;
			if (graph.GetVertPos(sourceVertex) == -1 || graph.GetVertPos(targetVertex) == -1)
			{
				cout << "Вершин нет в графе" << endl;
				f = false;
			}
			if (f)
			{
				cout << "Вес ребра: "; 
				cin >> edgeWeight; cout << endl;
				graph.InsertEdge(sourceVertex, targetVertex, edgeWeight);
			}
		}
		if (x > 5 && x < 160 && y >  125 && y < 160)
		{
			int sourceVertex;
			cout << "Введите вершину: "; 
			cin >> sourceVertex; cout << endl;
			if (graph.vertList.end() != find(graph.vertList.begin(), graph.vertList.end(), sourceVertex))
			{
				amountVerts--;
				graph.DeleteVertex(sourceVertex);
			}
			else cout << "Такой вершины не существует \n";
		}
		if (x > 5 && x < 160 && y >  165 && y < 200)
		{
			int sourceVertex;
			cout << endl << "Введите вершину: "; 
			cin >> sourceVertex; 
			cout << endl;
			if (graph.GetVertPos(sourceVertex) == -1)
			{
				amountVerts++;
				graph.InsertVertex(sourceVertex);
			}
			else
			{
				cout << "Вершина " << sourceVertex << " уже содержится в графе." << endl;
			}
		}
	}
	glutPostRedisplay();
}

void drawBackGr()
{
	const int k = 115;
	glColor3d(0.55, 0.22, 0.055);
	for (int i = 0; i < 7; i++)
	{
		for (int j = i % 2; j < 13; j += 2)
		{
			glBegin(GL_QUADS);
			glVertex2i(k * j, k * i);
			glVertex2i(k * j, k * i + k);
			glVertex2i(k * j + k, k * i + k);
			glVertex2i(k * j + k, k * i);
			glEnd();
		}
	}
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(0.89, 0.6, 0.31, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	drawBackGr();
	graph.DrawGraph();
	drawMenu();
	glutSwapBuffers();
}
