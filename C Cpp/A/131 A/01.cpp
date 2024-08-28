#include <iostream>
#include <string.h>
using namespace std;
int strCondionCheck(char str[101])
{
    int i = 1;
    int len = strlen(str);
    int upperCount = 0;
    for (i; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)

            upperCount++;
    }
    if (upperCount == len - 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[101];
    cin >> str;
    int result = strCondionCheck(str);
    if (result == 1)
    {
        if (str[0] >= 65 && str[0] <= 90)
        {
            str[0] = str[0] + 32;
        }
        else if (str[0] >= 97 && str[0] <= 122)
        {
            str[0] = str[0] - 32;
        }
        for (int i = 1; i < strlen(str); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
        }
        cout << str << endl;
    }
    else
    {
        cout << str << endl;
    }
    return 0;
}
