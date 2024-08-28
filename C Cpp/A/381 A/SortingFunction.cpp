#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // array initialisation
    int demo[50] = {15, 29, 37,22 ,16, 5, 26 ,31, 6, 32 ,19 ,3, 45, 36 ,33 ,14, 25, 20, 48, 7 ,42 ,11 ,24, 28, 9, 18, 8, 21, 47, 17, 38 ,40, 44 ,4, 35, 1 ,43, 39 ,41, 27, 12 ,13};

    int len = sizeof(demo) / sizeof(demo[0]);

    cout << "Before sorting array : ";
    for (int i = 0; i < len; i++)
    {
        cout << " " << demo[i];
    }

    std::sort(demo, demo + len); // Sorting demo array

    cout << "\n\nAfter sorting array : ";
    for (int i = 0; i < len; i++)
    {
        cout << " " << demo[i];
    }
    return 0;
}