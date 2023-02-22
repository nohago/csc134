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

  int main() {
    // call a function
    int times = 0;
    cout << "How many times should I say Hello?";
    cin >> times;
    say_hello(times);
  }
}