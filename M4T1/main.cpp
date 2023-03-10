// csc 134
// m4t1 - loops
// noha goumaa
// 2/22/23

#include <iostream>
using namespace std;

int main() {
  // purpose of program is to demostrate various uses of while

  // define functions we use in main
void say_hello(int count) {
    // repeat count times
    int i; // "index"
    while (i < count) {
      cout << "Hello #" << i+1 << endl;
      i++; // count up
    }
    
    return; // "return" is optional for void functions
  }
}

int square (int num) {
  
  return num*num;
}

int main() {
    // call a function
    int times = 0;
    cout << "How many times should I say Hello?";
    cin >> times;
    say_hello(times);

    // part 2
    int i = 0;
    int MAX = 10;
    cout << "Table of Squares from 0 to " << MAX << endl;
    cout << "Number" << "\t" << "Square" << endl;
    cout << "_______________" << endl;
    while (i< MAX) {
      cout << i << "\t" << square(i) << endl;
      i++;
    }
  
  }