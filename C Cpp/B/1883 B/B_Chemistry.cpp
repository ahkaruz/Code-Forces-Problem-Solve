#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";

void test_case() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int e=0,o=0;
    sort(all(s));
    for(int i=0; i<n;i++){
        if(s[i]==s[i+1]&&i<n-1){e++; i++;}
        else o++;
    }
    if(k<o-1) no
    else yes
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) test_case();
    return 0;
}