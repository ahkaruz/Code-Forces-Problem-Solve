#include <bits/stdc++.h>
using namespace std;
#define nl <<'\n'

void test_case() {
    int n; cin>>n;
    int k; cin>>k;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];    
    sort(a,a+n); 
    if(k==0) if(a[k]>1) cout<<--a[k] nl; else cout<<-1 nl;   
    else if((n>1 && (a[k-1]<a[k])) || k==n) cout<<a[k-1] nl;
    else cout<<-1 nl;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test_case();
    return 0;
}