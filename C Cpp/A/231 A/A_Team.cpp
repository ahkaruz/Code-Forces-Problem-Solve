#include <bits/stdc++.h>
using namespace std;
#define nl <<'\n'

void test_case() {
    int n; cin>>n;
    int t=0,c=0; int a[3]; 
    for(int i=1;i<=n;i++){ 
        for(int j=0;j<3;j++) {cin>>a[j]; if(a[j]>0) t++;}
        if(t>=2) c++; t=0;
    }
    cout<<c nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test_case();
    return 0;
}