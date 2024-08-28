#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n + 1];
    cin >> str;
    int countU = 0, countL = 0;
    int i, k, j;
    for (k = 97, j = 65; k <= 122, j <= 90; k++, j++)
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == k)
            {
                countL++;
                break;
            }
            else if (str[i] == j)
            {
                countU++;
                break;
            }
        }
    }
    if (countU + countL == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
