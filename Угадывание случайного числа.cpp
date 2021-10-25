#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(0,"");
    int x,a;
    x = (rand() % 100) + 1;
    for (int i = 1; i < 8; i++) {
        cout << i << " попытка: ";
        cin >> a;
        while (a < 1 || a > 100) {
            cout << "Ошибка ввода. Введите число от 1 до 100: ";
            cin >> a;
        }
        if (a == x) {
           cout << "Верно!";
           return 0;
        }
        else if (x > a)
            cout << "x" << " > " << a << endl;
        else
            cout << "x" << " < " << a << endl;
    }
    cout << "Вы проиграли. Попробуйте снова.";
    return 0;
}
