#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
 
void test_case() {
    int n; cin>>n;
    int m1=0,p1=0,op=0,a,temp;
    for(int i=0;i<n;i++) {cin>>a; if(a==1) p1++; else m1++;}
 
    if(m1>p1){
        temp=ceil(float(m1-p1)/2);
        m1-=temp; op+=temp;
    }
    if(m1%2) op++;
    cout<<op<<nl;      
}
 
int main() {
    int t; cin >> t;
    while (t--) test_case();
    return 0;
}
