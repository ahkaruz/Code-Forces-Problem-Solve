#include <bits/stdc++.h>
using namespace std;

void test_case() {
  string sqr[3];
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < 3; i++)
    cin >> sqr[i];
  for (int i = 0; i < 3; i++) {
    for (char ch : sqr[i])
      if (ch == 'A')
        a++;
      else if (ch == 'B')
        b++;
      else if (ch == 'C')
        c++;
  }
  if(a==2) cout<<'A'<<endl;
  else if(b==2) cout<<'B'<<endl;
  else cout<<'C'<<endl;
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
