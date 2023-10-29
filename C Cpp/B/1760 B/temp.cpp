#include <iostream>
#include <cstring> // Use cstring instead of string.h for C++ programs

using namespace std;

int main() {
    char str[6]="abfh";
   
    char temp[2] = {0}; // Initialize temp and set its size to 2 (for character + null terminator)
    
    for (int i = 0; i < strlen(str); i++) {
        if (temp[0] < str[i]) {
            temp[0] = str[i];
        }
    }
    
    cout << "Maximum character: " << temp << endl; // Print temp as a string
    return 0;
}
