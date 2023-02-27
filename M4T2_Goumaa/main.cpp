#include <iostream>

using namespace std;
// CSC 134
// M4T2 - menus
// Noha Goumaa
// 2/26/2023

//menu functions
void option_one() {
    // count 0-9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10) {
        cout << num << " ";
        num ++;
    }
    cout << endl;

    cout << "Using for() to count" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void option_two() {
    // sum up 5 numbers
}

void option_three() {
    // TODO
}

int main()
{
    // display a menu
    // user choose 1,2,3
    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to sum up numbers" << endl;
    cout << "Press 3 to TODO" << endl; // not implemented yet
    cout << "Choice: ";

    // input validation
    int choice;
    cin >> choice;
    // user must pick 1,2,3
     while (choice < 1 || choice > 3) {
        cout << "Please choose 1, 2, or 3: ";
        cin >> choice;
    }
    // if we get here, we know choice is invalid
    if (choice == 1) {
        option_one(); // function call
    }

    cout << "Thank you for using the menu!"<< endl;

    // Print three line menu
    // Press 1 to blah etc
    // cin an integer



    return 0;
}
