//1788 A
//Solved
#include <iostream>
using namespace std;

int calculateFunction()
{
    int array[1001];
    int i, j = 0, k = 0, l = 0;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] == 2)
            k++;
    }
    if (k % 2 == 1)
    {
        return -1;
    }
    else if (k == 0)
    {
        return 1;
    }
    else
        for (i = 0; i < n; i++)
        {
            j++;
            if (array[i] == 2)
            {
                l++;
                if (l == k / 2)
                {
                    return j;
                }
            }
        }
}
int main()
{
    int t, result;
    cin >> t;
    while (t--)
    {
        result = calculateFunction();
        cout << result << endl;
    }
    return 0;
}