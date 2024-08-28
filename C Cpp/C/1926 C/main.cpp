#include <iostream>
using namespace std;
#define mx 200001
int maxNum[mx];

int splitNumbersSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int mod = num % 10;
        num = num / 10;
        sum = sum + mod;
    }
    return sum;
}
void calculate()
{
    for (int init = 1; init < mx; init++)
    {
        maxNum[init] = maxNum[init - 1] + splitNumbersSum(init);
    }
}
int main()
{
    calculate();
    int t;
    cin >> t;
    while (t--)
    {
        int limit;
        cin >> limit;
        cout << maxNum[limit] << endl;
    }
    return 0;
}