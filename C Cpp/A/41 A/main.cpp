#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[101];
    char t[101];
    cin>>s>>t;
    int len = strlen(t);
    int i = 0, j = len-1;
    int count=0;
    for (i, j; i < len && j >= 0; i++, j--)
    {
        if(s[i]==t[j])
        count++;
    }
    if(count==len)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}