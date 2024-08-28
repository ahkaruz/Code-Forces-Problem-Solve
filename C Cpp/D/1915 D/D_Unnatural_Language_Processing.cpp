#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void test_case() {
    int n; cin>>n;
    string str,temp, res;
    cin>>str;

    for(int i=0;i<n;i++)
        if(str[i]=='a'|| str[i]=='e') temp+='v';
        else temp+='c';

    for(int i=1; i<n;i+=2)
        if (temp[i+1]=='c'&&temp[i+2]=='v') res+=str.substr(i-1,2)+'.';
        else {res+=str.substr(i-1,3)+'.'; i++;}
    
    res.resize(res.length()-1);
    cout<<res<<nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) test_case();
    return 0;
}