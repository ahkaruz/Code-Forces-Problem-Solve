#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    int n;
    cin >> n;
    while (n--)
    {
        cin >> str;
        int len = strlen(str);
        if (len <= 10)
            cout << str << endl;
        else
            cout << str[0] << len - 2 << str[len - 1] << endl;
    }
    return 0;
}