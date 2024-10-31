#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define all(x) (x).begin(), (x).end()

void test_case(){
    int n; cin >> n;
    vi a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    b = a;
    sort(all(b));
    
    vi odd, even;
    for (int num : a) {
        if (num % 2 == 0) even.push_back(num);
        else odd.push_back(num);
    }
    sort(all(odd));
    sort(all(even));

    int oddId = 0, evenId = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) a[i] = even[evenId++];
        else a[i] = odd[oddId++];
    }
    if (a == b) yes
    else no
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; cin >> t;
    while (t--) test_case();
    return 0;
}


// void test_case(){
//     int n; cin>>n;
//     vi a(n),b(n);
//     for(int i=0; i<n;i++) cin>>a[i];
//     b=a;
//     sort(all(b));
//     for(int i=0;i<n;i++)
//         for(int j=i+1;j<n;j++)
//             if(a[i]%2==a[j]%2 && a[i]>a[j]) 
//                 swap(a[i],a[j]);    
//     if(a==b) yes
//     else no 
// }