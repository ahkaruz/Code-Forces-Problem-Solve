#include <bits/stdc++.h>
using namespace std;

#define nl <<'\n'
#define all(x) (x).begin(), (x).end()

void test_case() {
    string str1,str2;
    cin>>str1>>str2;
    transform(all(str1), str1.begin(), ::tolower);
    transform(all(str2), str2.begin(), ::tolower);

    for(int i=0;i<str1.length();i++){
        if(str1[i]==str2[i]){continue;}
        else if(str1[i]>str2[i]){cout<<1 nl; return;}
        else {cout<<-1 nl; return;}
    }
    cout<<0 nl;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) test_case();
    return 0;
}