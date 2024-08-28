#include <iostream>
using namespace std;
int main()
{
    int cardNo;
    cin >> cardNo;
    int cards[cardNo];
    int i;
    int sereja = 0, dima = 0;
    int n = cardNo - 1;
    for (i = 0; i < cardNo; i++)
    {
        cin >> cards[i];
    }
    for (i = 0; i <= n; i++)
    {
        if (cards[i] > cards[n])
        {
            sereja = sereja + cards[i];
            i++;
            if (cards[i] > cards[n])
            {
                dima = dima + cards[i];
            }
            else if (cards[i] < cards[n])
            {
                dima = dima + cards[n];
                n--;
                i--;
            }
        }
        else if (cards[i] < cards[n])
        {
            sereja = sereja + cards[n];
            n--;
            if (cards[i] > cards[n])
            {
                dima = dima + cards[i];
            }
            else if (cards[i] < cards[n])
            {
                dima = dima + cards[n];
                n--;
                i--;
            }
        }
        if (i == n)
        {
            if (cardNo % 2 == 1)
                sereja = sereja + cards[i];
            else
                dima = dima + cards[i];
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
