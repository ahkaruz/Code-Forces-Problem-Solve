#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (--t+1)
    {
        string str;
        cin >> str;
        if (str == "YES" || str == "yes" || str == "YEs" || str == "YeS" || str == "yES" || str == "Yes" || str == "yEs" || str == "yeS")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}