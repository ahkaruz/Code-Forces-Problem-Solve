#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    cin.ignore();
    string commandIp[m];
    string serverIp[n];
    string server[n];
    string sIp[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, serverIp[i]);
    }
    for (int i = 0; i < m; i++)
    {
        getline(cin, commandIp[i]);
    }

    for (int i = 0; i < n; i++)
    {
        bool brokeL = true;
        bool brokeR = false;
        for (int j = 0; j < serverIp[i].length(); j++)
        {
            if (serverIp[i][j] == ' ')
            {
                brokeL = false;
                brokeR = true;
                continue;
            }
            if (brokeL)
            {
                server[i] += serverIp[i][j];
            }
            if (brokeR)
            {
                sIp[i] += serverIp[i][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        string cIp = "";
        bool check = false;
        for (int j = 0; j < commandIp[i].length(); j++)
        {
            if (commandIp[i][j] == ' ')
            {
                check = true;
                continue;
            }
            if (commandIp[i][j] == ';')
            {
                break;
            }
            if (check)
            {
                cIp += commandIp[i][j];
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (cIp == sIp[k])
            {
                cout << commandIp[i] + " #" + server[k] << endl;
            }
        }
    }
    return 0;
}