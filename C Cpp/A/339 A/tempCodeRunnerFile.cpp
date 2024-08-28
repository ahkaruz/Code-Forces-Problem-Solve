#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    char temp[1];
    cin >> str;
    int i, j = 0, k;
    int len = strlen(str);
    int strcount = (len / 2) + 1;
    for (i = 0; i < len; i += 2)
    {
        for (j = i; j < len - i - 1; j += 2)
        {
            if (str[j] > str[j + 2])
            {
                temp[0] = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp[0];
            }
        }
    }
    cout << str;
    return 0;
}
