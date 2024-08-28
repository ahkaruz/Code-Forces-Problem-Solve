#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using namespace std;

void test_case() {
    int n = 0;
    cin >> n;
    vector<int> number(n);
    for (int i = 0; i < n; i++) cin >> number[i];
    string s;
    cin >> s;

    vector<int> indexL, indexR;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') indexL.push_back(i);
        else indexR.push_back(i);
    }

    if (indexR.empty() || indexL.empty()) {
        cout << 0 << endl;
        return;
    }

    vector<ll> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + number[i - 1];
    }

    ll result = 0;
    int lastIndexR = indexR.size() - 1;
    int sizeR = indexR.size();

    for (int i = 0; i < indexL.size(); i++) {
        if (sizeR == 0) break;
        else if (indexL[i] > indexR[lastIndexR]) break;
        result += prefixSum[indexR[lastIndexR] + 1] - prefixSum[indexL[i]];
        lastIndexR--;
        sizeR--;
    }
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
    return 0;
}
