#include <iostream>
#include <cstdlib> // enables rand(), srand()
#include <ctime> // use of time

using namespace std;

// CSC 134
// M4T2 - menus
// Noha Goumaa
// 2/26/2023
// version 2 - started our character creator

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
    // dice roller
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed = time(0);
    srand (seed);
    // roll dice
    d6_1 = (rand() %6) +1; // 0-5, then add one
    d6_2 = (rand() %6) +1;
    d6_3 = (rand() %6) +1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}

void option_three() {
    // sum and average of dice
    // roll 3d6 six times
    // find the sum and the average
    // TODOtodo: reroll if its not high enough
    int total = 0;     // total of all stats
    int d6_1, d6_2, d6_3;   // 3 dice (6 sided)
    int roll;
    int seed = time(0);
    srand (seed);
    for (int i=1; i<=6; i++) {
        // roll dice
        d6_1 = (rand() %6) +1; // 0-5, then add one
        d6_2 = (rand() %6) +1;
        d6_3 = (rand() %6) +1;
        roll = d6_1 + d6_2 + d6_3;

        // print results
        cout << "Roll # " << i << ": ";
        cout << d6_1 << " + " << d6_2 << " + " << d6_3;
        cout << " = " << total << endl;

        // add to the total
        total += roll;
    }
    // print the total
    cout << "total of all stats: " << total << endl;
    int average = total / 6 ;  // note: were dropping he decimal
    cout << "average roll = " << average << endl;
    if (average <= 9) {
        cout << "Low stats, you can reroll." << endl;
    }
    else {
        cout << "A playable character!" << endl;
    }
}

// there is no option 4 function, it's just quit.

//main menu

int main()
{
    // display a menu
    // user choose 1,2,3
    cout << "Welcome to the menu!" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; // not implemented yet
    cout << "Choice: ";

    // input validation
    int choice;
    cin >> choice;
    // user must pick 1,2,3, or 4
     while (choice < 1 || choice > 4) {
        cout << "Please choose 1, 2, 3 or 4: ";
        cin >> choice;
    }
    // if we get here, we know choice is invalid
    if (choice == 1) {
        option_one(); // function call
    }
    if (choice == 2) {
        option_two(); // dice roller
    }
     if (choice == 3) {
        option_three();
    }
    if (choice == 4) {
        cout << "Ouitting time!" << endl;
    }

    cout << "Thank you for using the menu!"<< endl;

    // Print three line menu
    // Press 1 to blah etc
    // cin an integer



    return 0;
}
