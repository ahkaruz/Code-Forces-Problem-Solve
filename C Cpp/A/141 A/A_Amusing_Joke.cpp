#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no  cout<<"NO"<<'\n';
#define all(x) (x).begin(), (x).end()

void test_case() {
    string a,b,c;
    cin>>a>>b>>c;
    a+=b;
    if(a.length()==c.length()){sort(all(a)); sort(all(c)); if(a==c) yes else no}
    else no    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test_case();
    return 0;
}