#include <iostream>
using namespace std;
int main()
{
    int p, q, r;
    int A, B, C;
    cout << "p q r | A B C" << endl;
    for (int i = 0; i < 8; i++)
    {
        p = !(i / 4);
        q = !((i / 2) % 2);
        r = !(i % 2);
        // A=((r∨p)~(p→¬q))
        if ((r || p) == ((!p) || (!q)))
            A = 1;
        else
            A = 0;
        // B=(¬(p∧¬r)~(q∨¬r))
        if ((!(p && !r)) == (q || !r))
            B = 1;
        else
            B = 0;
        // C=A∨B
        if (A || B)
            C = 1;
        else
            C = 0;
        cout << p << " "
             << q << " "
             << r << " | "
             << A << " "
             << B << " "
             << C << endl;
    }
    return 0;
}