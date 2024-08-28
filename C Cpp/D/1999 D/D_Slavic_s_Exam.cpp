#include <bits/stdc++.h>
using namespace std;
#define nl <<'\n'

void test_case() {
    string s; cin>>s;
    string ss; cin>>ss;
    int n=s.length(),m=ss.length(),cnt=0;

    for(int i=0;i<n;i++){
        if(cnt==m) {if(s[i]=='?') s[i]='k';}
        else if(s[i]==ss[cnt]) {cnt++; continue;}
        else if(s[i]=='?') {s[i]=ss[cnt]; cnt++; continue;}
    }

    if (cnt==m){cout<<"YES" nl <<s nl;} 
    else cout<<"NO" nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) test_case();
    return 0;
}