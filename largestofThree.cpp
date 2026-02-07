#include <iostream>

using namespace std;

int getAnIntFromTheUser();
int compare3Ints(int int1, int int2, int int3);

int main () {

    cout << "please enter a whole number" << endl;
    int userInt1 = getAnIntFromTheUser();
    cout << "please enter a whole number" << endl;
    int userInt2 = getAnIntFromTheUser();
    cout << "please enter a whole number" << endl;
    int userInt3 = getAnIntFromTheUser();

    cout << compare3Ints(userInt1, userInt2, userInt3) << " is the largest int" << endl;

    return 0;
}

int getAnIntFromTheUser () {

    int output;
    string input;
    getline (cin, input);
    output = stoi(input);

    return output;
}

int compare3Ints(int int1, int int2, int int3) {
    if (int1 >= int2) {
        if (int1 >= int3) {
            return int1;
        }
        else {
            return int3;
        }
    }
    else {
        if (int2 >= int3) {
            return int2;
        }
        else {
            return int3;
        }
    }
}