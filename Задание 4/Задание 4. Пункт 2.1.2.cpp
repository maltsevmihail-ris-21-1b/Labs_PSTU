#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    float g, f;
    cout << "Введите количество галлонов: ";
    cin >> g;
    f = g / 7.481;
    cout << g <<" галлонов эквивалентны " << f << " кубическим футам.";
    return 0;
}
