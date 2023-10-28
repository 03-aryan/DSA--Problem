#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    // Extracting a substring starting from index 7 of length 5
    string sub = str.substr(7, 5); // Starting from index 7 and extracting 5 characters
    
    cout << "Original string: " << str << endl;
    cout << "Substring: " << sub << endl;

    return 0;
}
