#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    double temp=0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        
        temp=temp+(double)x[i];
    }
    cout<<temp/n<<endl;
    return 0;
}