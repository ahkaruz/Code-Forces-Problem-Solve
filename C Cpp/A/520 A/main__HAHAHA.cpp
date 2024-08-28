#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n+1];
    cin >> str;
    int i = 0, countU = 0, countL = 0;
    for (i; i < strlen(str); i++)
    {
        if (str[i] <= 122 && str[i] >= 97)
            countL++;
        else
            countU++;
    }
    if (countL > 0 && countU > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}