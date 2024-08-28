#include <bits/stdc++.h>
using namespace std;

using it = float;
#define nl <<'\n'
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

void test_case() {
    it n; cin>>n;
    vi a; for(it i=0;i<n;i++){
        int t; it k; cin>>t; k=sqrt(t);
        if((ceil(k)-floor(k))) a.push_back(t);
    }
    sort(all(a)); cout<<a.back() nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test_case();
    return 0;
}