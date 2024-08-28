#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101] = "HeLLO";
    char str2[101];
    strcpy(str2, str);

    if ((str[0] >= 97 && str[0] <= 122))
    {
        str[0] = str[0] - 32;
        for (int i = 1; i < strlen(str); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
                if (str[i + 1] >= 97 && str[i + 1] <= 122)
                {
                    break;
                }
            }
        }
        cout << str << endl;
    }
    else if (str[0] >= 65 && str[0] <= 90)
    {
    
        for (int i = 1; i < strlen(str); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
                if (str[i + 1] >= 97 && str[i + 1] <= 122)
                {
                    break;
                }
            }
        }
        cout << str << endl;
    }

    else
    {
        cout << str2;
    }

    return 0;
}
