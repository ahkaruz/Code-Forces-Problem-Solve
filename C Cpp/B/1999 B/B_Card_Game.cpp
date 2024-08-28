#include <bits/stdc++.h>
using namespace std;
#define nl <<'\n'

void test_case() {
    int a[2],b[2],ax=0,bx=0; cin>>a[0]>>a[1]>>b[0]>>b[1];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(a[i]>b[j]) {ax++;}
            else if(a[i]<b[j]) {bx++;}
        }
    }
    if(ax==0||ax<=bx) cout<<0 nl;
    else if(bx==0) cout<<4 nl;
    else cout<<2 nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) test_case();
    return 0;
}