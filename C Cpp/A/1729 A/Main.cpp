#include <iostream>
using namespace std;
int main()
{
    int A, B, C, n, tempA, tempB, i, j;
    cin >> n;
    while (n--)
    {
        cin >> A >> B >> C;
        if (B > C)
        {
            if (B > A)
            {
                cout << "1" << endl;
            }
            else if (B < A)
            {
                cout << "2" << endl;
            }
            else if (A == B)
            {
                cout << "3" << endl;
            }
        }
        else if (B < C)
        {
            tempB = C - B + B;
            if (tempB > A)
            {
                cout << "1" << endl;
            }
            else if (tempB < A)
            {
                cout << "2" << endl;
            }
            else if (A == tempB)
            {
                cout << "3" << endl;
            }
        }
    }
    return 0;
}
