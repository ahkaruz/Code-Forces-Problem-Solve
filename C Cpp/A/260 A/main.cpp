#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    cin >> n;
    int p = n;
    int q = n;
    int i, j, k;
    int x, y;
    for (i = 0; i <= n; i++)
    {
        for (x = 0; x < p; x++)
        {
            cout << "  ";
        }
        p--;
        for (j = 0; j <= i; j++)
        {
            cout << j;
            if (j < i)
                cout << " ";
        }

        for (k = j - 2; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
    }
    for (i = n - 1; i >= 0; i--)
    {

        for (y = i; y < q; y++)
        {
            cout << "  ";
        }
        for (j = 0; j <= i; j++)
        {
            cout << j;
            if (j < i)
                cout << " ";
        }
        for (k = i - 1; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
    }
    return 0;
}
