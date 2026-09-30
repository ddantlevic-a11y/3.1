// Lab_03_4.cpp
// <Данилевич Данило>
// Лабараторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double R;
    double y;
    cout << " x = "; cin >> x;
    cout << " R = "; cin >> R;
    cout << " y = "; cin >> y;
    //розгалуження в повній формі
    if ((pow(x + R,2) + pow(y - R,2) <= pow(R,2)) ||
        ((0 <= x && x <= 2*R) && (-R <= y && y <= 0)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}