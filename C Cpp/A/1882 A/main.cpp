#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp[i] = 1 + i;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == temp[i])
            {
                temp[i]++;
            }
            if (i > 0 && temp[i] == temp[i - 1])
            {
                temp[i] += 1;
                if (a[i] == temp[i])
                {
                    temp[i]++;
                }
            }
            if (i > 0 && temp[i] < temp[i - 1])
            {
                temp[i] = temp[i] + 2;
                if (a[i] == temp[i])
                {
                    temp[i]++;
                }
            }
        }
        cout << temp[n - 1] << endl;
    }
    return 0;
}
