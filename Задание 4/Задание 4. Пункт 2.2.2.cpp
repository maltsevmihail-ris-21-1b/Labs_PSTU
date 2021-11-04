#include <iostream>
using namespace std;
int a, b, c, t1, t2, t;
char p, k;
int main()
{
    do {
    cout << "Введите время начала промежутка в формате ЧЧ:ММ:СС: ";
    cin >> a >> p >> b >> k >> c;
    t1 = a*3600 + b*60 + c;
    } while (a > 23 || b > 59 || c > 59 || a < 0 || b < 0 || c < 0);
    do {
    cout << "Введите время конца промежутка в формате ЧЧ:ММ:СС: ";
    cin >> a >> p >> b >> k >> c;
    t2 = a*3600 + b*60 + c;
    } while (a > 23 || b > 59 || c > 59 || a < 0 || b < 0 || c < 0);
    t = t2 - t1;
    a = t / 3600;
    b = (t % 3600) / 60;
    c = (t % 3600) % 60;
    cout << "Продолжительность промежутка: " << a << p << b << k << c;
    return 0;
}
