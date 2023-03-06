#include <iostream>

using namespace std;

int main()
{
    // make a grid in ASCII text
    int rows, columns;
    cout << "how many rows? " ;
    cin >> rows;
    cout << "how many colums? ";
    cin >> columns;

    cout << "step 1: print one row" << endl;
    for (int i=0; i<rows; i++) {
        cout << "*" << " " ;
    }
    cout << endl; // entire loop is on the same line

    cout << "step 2: print one column" << endl;
    for (int i=0; i<columns; i++) {
        cout << "*"<< endl ;
    }

    cout << "step 3: nested loop to print the grid" <<endl;
        for (int i=0; i< columns; i ++) {
            // print one row at a time
            for (int j=0; j<rows; j++) {
            // print one cell of the grid at a time
            cout << "*" << " ";
        }
        cout << endl; // finish the row
    }
    //done
    return 0;
}
