// Lab 3.2
// <Данилевич Данило>
// Лабараторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double a;
    double b;
    double c;
    double F;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    // cпособ 1: розгалуження в скороченій формі
    if (x < 5 && c != 0)
        F = -a * pow(x,2) - b;
    if ( x > 5 && c == 0)
        F = (x - a) / x;
    if (!(x<5 && c != 0) && !(x>5 && c == 0))
        F = -x/c;
    cout << endl;
    cout << "1) F = " << F << endl;
    // спосіб 2: розгалуження в повній формі
    if (x < 5 && c != 0)
        F = -a * pow(x,2) - b;
    else
        if (x > 5 && c == 0)
            F = (x - a) / x;
        else
            F = -x/c;
    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}