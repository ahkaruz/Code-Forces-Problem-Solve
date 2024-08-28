#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'V' && str[i + 1] == 'K')
        {
            count++;
            i += 1;
        }
    }
    if (str[0] == 'K' && str[1] == 'K')
    {
        count++;
    }
    else
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'V' && str[i + 1] == 'V' && str[i + 2] == 'K')
            {
                continue;
            }
            else if ((str[i] == 'V' && str[i + 1] == 'V') || (str[i] == 'K' && str[i + 1] == 'K' && str[i + 2] == 'K'))
            {
                count++;
                break;
            }
        }

    cout << count << endl;
    return 0;
}