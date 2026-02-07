#include <iostream>

using namespace std;

int getAnIntFromTheUser();
int compareTwoints (int int1, int int2);
int sumTwoInts (int int1, int int2);

int main () {

    cout << "please enter a whole number" << endl;
    int userInt1 = getAnIntFromTheUser();

    cout << "please enter a whole number" << endl;
    int userInt2 = getAnIntFromTheUser();

    cout << compareTwoints(userInt1, userInt2) << " is larger" << endl;

    cout << sumTwoInts(userInt1, userInt2) << " is the total of the two numbers" << endl;

    return 0;
}

int getAnIntFromTheUser () {

    int output;
    string input;
    getline (cin, input);
    output = stoi(input);

    return output;
}

int compareTwoints (int int1, int int2) {
    if (int1 >= int2) {
        return int1;
    }
    else {
        return int2;
    }
}

int sumTwoInts (int int1, int int2) {
    return int1 + int2;
}
