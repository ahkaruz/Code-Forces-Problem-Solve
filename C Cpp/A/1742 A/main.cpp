#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}