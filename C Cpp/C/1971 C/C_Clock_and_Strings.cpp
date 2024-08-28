#include <bits/stdc++.h>
using namespace std;
void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d; //  12 9 7 6

        if (a < b)
            swap(&a, &b);

        if (c < d)
            swap(&c, &d);

        if (a < c)
        {
            int temp1 = a;
            int temp2 = b;
            a = c;
            b = d;
            c = temp1;
            d = temp2;
        }
        if (b > d || a < d)
        {
            if (b > c)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
