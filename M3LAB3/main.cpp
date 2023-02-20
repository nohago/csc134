// CSC134
// M3LAB3
// Noha Goumaa
// 2/15/23

#include <iostream>
#include <cstdlib>
#include <ctime> // use of time
using namespace std;

// this program simlates a single game of crps.

int main() {

  // variables
  int die1, die2, roll;   // roll is 2d6
  int seed;               // will use time(0) later
  //char any_key;           // for cin.get()

  
  bool winner = false;
  cout << "Welcome to the craps table!\n";

  // cout << "What's your lucky number? ";
  // cin >> seed;
  // seed is truly random
  seed = time(0);
  srand(seed);
  
  // start game
  cout << "Let's roll! " << endl; 
  die1 = (rand() % 6) + 1;   // from 1 to 6
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;
  // DEBUG: just use lucky number as roll
  // roll = seed; // take this out!

  cout << "You rolled: (" << die1 << " + " << die2 << ") -> ";
  cout << roll << endl;

  // determine outcome!
  switch (roll) {
    //  instant losses
    case 2:
      cout << "Two - Snake eyes!" << endl;
      winner = false;
      break;
    case 12:
      cout << "Twelve! Boxcars!" << endl;
      winner = false;
      break;

    // instant wins
    case 7: 
      cout << "Lucky number seven!" << endl;
      winner = true;
      break;
    case 11:
      cout << "Eleven! Eleven's a winner!" << endl;
      winner = true;
      break;
    
    // point rolls
    default:
      cout << "Rolled: " << roll << endl;
      cout << "Continue playing, point is " << roll << endl;
      cout << "But we'll just call it a draw." << endl;
      break;
  }
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "Sorry -- you didn't win" << endl;
  }
  // end game
  cout << "Thank you for playing!" << endl;
  return 0;
  
}