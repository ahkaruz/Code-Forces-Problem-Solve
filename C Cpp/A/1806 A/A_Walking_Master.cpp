#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    int x, y;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (b > d)
            cout << "-1" nl;
        else if (a == c && b == d)
        {
            cout << "0" nl;
        }
        else
        {
            x = d - b;
            a = a + x;
            if (a < c)
                cout << "-1" nl;
            else
            {
                y = a - c;
                cout << x + y nl;
            }
        }
    }
    return 0;
}