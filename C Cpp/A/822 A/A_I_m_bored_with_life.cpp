#include <iostream>
using namespace std;
#define ll int

ll factorial(ll n)
{
    ll result = 1;
    for (ll i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
int main()
{
    ll A, B;
    ll facto;
    cin >> A >> B;
    facto = factorial(min(A, B));
    cout << facto << endl;
    return 0;
}