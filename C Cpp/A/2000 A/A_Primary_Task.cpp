#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void test_case() {
    string a; cin>>a;
    if(a.length()>2){
        int x=stoi(a.substr(0,2));
        int y=stoi(a.substr(2,a.length()-1));
        if((a[2]=='0')||x!=10||y<2) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) test_case();
    return 0;
}