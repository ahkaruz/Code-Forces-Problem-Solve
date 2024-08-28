#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[100];
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 1)
        {
            for (i = n - 1; i >= 0; i--)
            {
                j++;
                if (a[k - 1] == a[i])
                {

                    break;
                }
            }
            break;
            
        }        
        cout<<"0"<<endl;
    }
    cout << n - j + 1 << endl;
    return 0;
}