// Lab 3.3
// <Данилевич Данило>
// Лабараторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 7
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double x;
    double R;
    double y;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    //розгалуження в повній формі
    if (x < -R)
        y = R;
    else 
        if (x >= -R && x <= R)
            y = R - sqrt(pow(R,2) - pow(x,2));
        else 
            if (x > R && x <= 6)
                y = R + ((-3 - R)/(6 - R)) *  (x - R);
            else
                    y = x - 9;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}