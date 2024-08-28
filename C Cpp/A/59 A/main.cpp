#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    cin >> str;
    int i, upperCount = 0, lowerCount = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            lowerCount++;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            upperCount++;
        }
    }
    if (upperCount > lowerCount)
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] - 32;
            }
        }
    else
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
        }
    }
    cout << str<<endl;
}