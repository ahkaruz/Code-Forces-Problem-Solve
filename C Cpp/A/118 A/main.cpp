#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    char withOutViwel[201] = "\0";
    gets(str);
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'| str[i] == 'y' || str[i] == 'Y')
        {
            continue;
        }
        else
        {
            if (str[i] == ' ')
            {
                withOutViwel[j] = str[i];
                j++;
            }
            else
            {
                withOutViwel[j] = '.';
                j++;
                withOutViwel[j] = str[i];
                j++;
            }
        }
    }
    cout << strlwr(withOutViwel);
    return 0;
}