#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2,d = 0;
    cout << "Start";
    cin >> h1 >> m1;
    cout << "Finsh";
    cin >> h2 >> m2;
    cout << h1 << ":" << m1 << endl;
    cout << h2 << ":" << m2 << endl;

    while ((h1 != h2) || (m1 != m2))
    {
        if (m1 == 30)
        {
            d++;
        }
        m1++;
        if (m1 == 60)
        {
            m1 = 0;
            h1++;
            if (h1 > 12)
            {
                d += h1 - 12;
            }
            else
            {
                d += h1;
            }
            if (h1 == 24)
            {
                h1 = 0;
            }
        }
    }
    cout << d;
}