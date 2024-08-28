#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

void test_case() {
  int n=4; cin>>n;
  int a[n]; for(int i=0;i<n;i++) cin>>a[i];
  
  if (a[n-1]*2>a[n-2] || a[n-1]>a[n-3]) {cout << "NO" << nl; return;}

  for(int i=1;i<n-1;i++){      
      if(a[i]< a[i-1] * 2 || a[i+1]<a[i-1] ||  ((a[i-1]==a[i+1])&&a[i+1]+a[i-1]!=a[i])) {cout << "NO" << nl; return;}
      else if(i==n-2 && (a[n-1]+a[n-3]!=a[n-2] || a[n-1]!=a[n-3])) {cout << "NO" << nl; return;} 
      else if(a[i]==0) {i++; continue;}
      a[i]-=a[i-1]*2;
      a[i+1]-=a[i-1];
      a[i-1]=0;      
  }
  cout<<"YES"<<nl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--)
    test_case();
  return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl '\n'
 
// void test_case() {
//   int n=4;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++) cin>>a[i];
  
//   if (a[1]< a[0] * 2 || a[n-1]*2>a[n-2] || a[2]<a[0] || a[n-1]>a[n-3]) {
//     cout << "NO" << nl;
//     return;
//   }
 
//   for(int i=1;i<n-1;i++){
//       if(a[i]==0) {i++; continue;}
//       else if(a[i]< a[i-1] * 2 || a[i+1]<a[i-1]) {cout << "NO" << nl; return;}
//       a[i]-=a[i-1]*2;
//       a[i+1]-=a[i-1];
//       a[i-1]=0;
//   }
//   for(int i=0;i<n;i++){if(a[i]>0){cout<<"NO"<<nl; return;}}
//   cout<<"YES"<<nl;
// }
 
// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int t = 1;
//   cin >> t;
//   while (t--)
//     test_case();
//   return 0;
// }