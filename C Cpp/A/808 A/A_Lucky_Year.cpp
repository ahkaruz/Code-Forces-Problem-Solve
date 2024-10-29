#include <bits/stdc++.h>
using namespace std;
#define nl <<'\n'

void test_case() {
    int num; cin>>num;
    double rem=0;
    int div=0,res=0;

    if(num<10){
        cout<<1 nl;
    }
    else{
        for(int i=10;;i*=10){
            if(num/i==0) break;
            div=i;
            rem=num%div;
        }
    res=div-rem;
    cout<<res nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) test_case();
    return 0;
}