#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(0,"");
    int x,a;
    int i = 0;
    bool f = false;
    x = (rand() % 100) + 1;
    while (f == false && i < 7) {
        cout << ++i << " попытка: ";
        cin >> a;
        while (a < 1 || a > 100) {
            cout << "Ошибка ввода. Введите число от 1 до 100: ";
            cin >> a;
        }
        if (a == x) {
           cout << "Верно!";
           f = true;
        }
        else if (x > a)
            cout << "x" << " > " << a << endl;
        else
            cout << "x" << " < " << a << endl;
    }
    if (f == false)
        cout << "Вы проиграли.\nОтвет: " << x;
    return 0;
}
