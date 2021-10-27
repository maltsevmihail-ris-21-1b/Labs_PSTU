#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x;
    int a, b, c;
    bool f = false;
    cout << "Введите трехзначное число: ";
    do {
        cin >> x;
        a = x % 10;
        b = (x / 10) % 10;
        c = x / 100;
        if (x < 100 || x > 999 || a == b || b == c || c == a)
            cout << "Неверный ввод.\nВведите трехзначное число без повторяющихся цифр: ";
        else 
            f = true;
    } while (f == false);
    cout << "Все возможные комбинации чисел: ";
    cout << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << c << a << endl;
    cout << b << a << c << endl;
    cout << c << b << a << endl;
    cout << c << a << b << endl;
    cout << "Наибольшее число: ";
    if (a > b && a > c)
        if (b > c)
            cout << a << b << c;
        else
            cout << a << c << b;
    else if (b > a && b > c)
        if (a > c)
            cout << b << a << c;
        else
            cout << b << c << a;
    else
        if (a > b)
            cout << c << a << b;
        else
            cout << c << b << a;
    return 0;
}
