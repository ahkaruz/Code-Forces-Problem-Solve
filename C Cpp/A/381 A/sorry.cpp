#include <iostream>
using namespace std;
int main()
{
    int cardNo;
    cin >> cardNo;
    // int cards[cardNo];
    int cards[cardNo] = {48, 47, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 33, 32, 31, 29, 28, 27, 26, 25, 24, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 9, 8, 7, 6, 5, 4, 3, 1};
    int i, j, k;
    int Sareja = 0, Dima = 0;

    cards[cardNo] = 0;
    /*for (i = 0; i < cardNo; i++)
    {
        cin >> cards[i];
    }*/
    /*for (i = 0; i < cardNo; i++)
    {
        for (j = 0; j < cardNo - i - 1; j++)
        {
            if (cards[j] < cards[j + 1])
            {
                int temp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = temp;
            }
        }
    }*/
    /*for (i = 0; i < cardNo; i++)
    {
        cout << cards[i] << " ";
    }*/
    cout << endl;

    for (i = 0; i < cardNo; i++)
    {
        Sareja = Sareja + cards[i];
        Dima = Dima + cards[i + 1];
        i++;
    }
    cout << Sareja << " " << Dima << endl;
    return 0;
}
