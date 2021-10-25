#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");
    int x;
    int a,b,c;
    bool f = false;
    cout << "Введите трехзначное число: ";
    cin >> x;
    while (x < 100 || x > 999) {
        cout << "\nНеверный ввод. Введите трехзначное число: ";
        cin >> x;
    }
    a = x % 10;
    x /= 10;
    b = x % 10;
    c = x / 10;
    while (f == false) {
        if ((a == b)||(b == c)||(c == a)) {
            cout << "Неверный ввод: цифры в числе не должны повторяться.\nВведите трехзначное число: ";
            cin >> x;
            a = x % 10;
            x /= 10;
            b = x % 10;
            c = x /10;
        }
        else 
            f = true;
    }
    cout << "Все возможные комбинации чисел: \n";
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
    else if (b > a && b >c)
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
