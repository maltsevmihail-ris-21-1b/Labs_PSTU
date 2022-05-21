#include "Header.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	graph.firstGraph();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1495, 730);
	glutCreateWindow("Voyager");
	WinW = glutGet(GLUT_WINDOW_WIDTH);
	WinH = glutGet(GLUT_WINDOW_HEIGHT);
	glLineWidth(2);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouseClick);
	glutMainLoop();
	return 0;
}