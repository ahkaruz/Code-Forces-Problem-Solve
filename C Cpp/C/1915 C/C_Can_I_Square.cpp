#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'
int root(ll x);
void test_case() {
  // int n;
  // cin>>n;
  // int a[n];
  // ll s=0;
  double fr;
  // for(int i=0;i<n;i++){cin>>a[i]; s+=a[i];}
  fr=root(140);
  // if(ceil(fr)-floor(fr)==0) cout<<"YES"<<nl;
  // else cout<<"NO"<<nl; 
  // if(s==1) {cout<<"YES"nl; return;} 
  // for(int i=1;i<=s/2;i++)
  //   if(i*i==s) {cout<<"YES"nl; return;}
  // cout<<"NO"nl;
  cout<<fr<<nl;
}

int root(ll x) {
  if(x<2) return x;
  ll low=0, high=x,result=0;

  while(low<=high){
    ll mid = low + (high - low) / 2;
    int midSqr=mid * mid;
    if (midSqr==x) return mid;
    else if (midSqr<x) {
      low = mid + 1;
      result=mid; 
    } 
    else high=mid-1;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
//  cin >> t;
  while (t--)
    test_case();
  return 0;
}