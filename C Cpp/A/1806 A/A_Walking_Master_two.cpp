#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, cnt = 0;
        cin >> a >> b >> c >> d;
        if (b > d)
            cout << "-1" << endl;
        else
        {
            while (b != d)
            {
                a++;
                b++;
                cnt++;
            }
            if (a > c)
            {
                while (a != c)
                {
                    a--;
                    cnt++;
                }
                cout << cnt << endl;
            }
            else if (a < c)
                cout << "-1" << endl;
            else
                cout << cnt << endl;
        }
    }
    return 0;
}