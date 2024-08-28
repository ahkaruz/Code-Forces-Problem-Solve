#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int temp;
    if (n % 2 == 0)
    {
        temp = n / 2;
    }
    else
    temp=((n/2)+1)-(((n/2)+1)*2);
    cout << temp << endl;
    return 0;
}