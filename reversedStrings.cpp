#include <iostream>
#include <string>

using namespace std;

int main() {

    string userString;
    string outputString;

    cout << "enter a string"  << endl;
    getline (cin, userString);
    // cout << userString << endl;

    for (int i = userString.length(); i >= 0; i--) {
        outputString += userString[i];
    }

    cout << outputString << endl;

    return 0;
}