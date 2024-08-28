#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    char str[n+1];
    cin >> str;
    char temp[2]={0};
    int i, j, k, count = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (temp[0] < str[i])
        {
            temp[0] = str[i];
        }
    }
    for (j = 97; j <= 122; j++)
    {
        if (temp[0] != j)
        {
            count++;
        }
        else
        {
            count++;
            break;
        }
    }
    cout << count << endl;
    }
    return 0;
}