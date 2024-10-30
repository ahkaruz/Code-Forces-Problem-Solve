#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const long double pi = acos(-1);
#define vi vector<ll>
#define nl <<'\n'

void test_case() {
    int n; cin>>n;
    vi a;
    int sig=0, cntZero=0;
    ll sum=0, temp=0;    
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp!=0) sig=1;
        else if(sig==0) continue;
        else cntZero++;
        a.push_back(temp);
        if(i<n-1) sum+=temp;
    }
    if(a.size()>=1 && a[a.size()-1]==0) {cntZero-=1; sum+=(cntZero); cout<<sum nl;}
    else {sum+=cntZero; cout<<sum nl;}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) test_case();
    return 0;
}