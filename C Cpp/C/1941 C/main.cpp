#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "mapiepie";
    string a = "pie";
    string b = "map";
    int l=0;
    int cntM = 0;
    int cntN = 0;
    int cntA = 0;
    int cntB = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == a[l])
        {
            cntM++;
            l++;
        }
        else
            cntM = 0;
            l=0;

        if (cntM == 3)
        {
            cntA++;
            l=0;
            cntM=0;
        }
    }
    cout << cntA;
    return 0;
}
