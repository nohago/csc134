// CSC134
// M3LAB3
// noha goumaa
// 2/15/23

#include <iostream>
#include <cstdlib>
#include <ctime> // enables use of time
using namespace std;

// this program simlates a songle game of crps.
// first version (MVP) is a single roll. 

int main() {
  int die1, die2, roll; //2d6
  int seed; // will use time(0) later
  // char any_key; 
  
  cout << "Welcome to the craps table!" << endl;

  //for testing, we will usee a repreatable seed
  cout << "What's your lucky number? "; 
  cin >> seed;
  srand(seed);
  
  // start game
  cout << "Let's roll! " << endl; //TODO: "press any key"
  die1 = (rand() % 6) + 1;
  die2 = (rand() % 6) + 1;
  roll = die1 +die2;
  
  cout << "You rolled: (" << die1 << " + " << die2 << ") -> ";
  cout << roll << endl;
  
// determine outcome!
switch (roll) {
  // instant losses
  case 2:
    cout << "Snake eyes!" << endl;
    winner = false;
    break;

  case 12:
    cout << "Boxcars!" << endl;
    winner = false;
    break; 
}
  // instant wins

  // to be ocntinues (point)
  default:
    cout << "UNKNOWN - TODO" << endl;

  } 
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "Sorry -- you didnt win" << endl;
  }

  
  // end game
  cout << "Thanks for playing!" << endl;
  
  return 0;
  
}