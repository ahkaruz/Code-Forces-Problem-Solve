#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    cin >> str;
    int len = strlen(str);
    int countL = 0;
    int i, k;
    for (k = 97; k <= 122; k++)
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == k)
            {
                countL++;
                break;
            }
        }
    }
    if (countL % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}