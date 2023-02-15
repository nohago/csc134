// CSC 134
// M1Lab2
// Noha Goumaa
// 02/13/23

#include <iostream>
using namespace std;
  
// functions are vblocks of code -- think of them as making new verbs
// (Like how making variables is making new nouns)
// Declare the functions first, define them later.
void choose_door1();
void choose_door2();

int main() {
  // variable
  int choice;

  // question
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: " ;
  cin >> choice;

  // using if, make a decision based on the user's choice 
  // TODO
  cout << "DEBUG: picked " << choice << endl; 
  if (choice == 1) {
    cout << "You picked Door Number One!" << endl;
    cout << "You won -- A NEW CAR!" << endl;
  }
    else if (choice ==2) {
      cout << "You picked Door Number Two!" << endl;
    }
  else {
    cout << "You didn't pick any door at all!" << endl;
  }

  cout << "Thank you for playing!" << endl;

  return 0;
  
  }
  
  // run this code if the user chooses Door #1
  void choose_door1(){
    cout << "You picked Door Number One!" << endl;
    cout << "You won -- A NEW CAR!" << endl;
    cout << "but..." << endl;
    cout << "you have to pick the right key!" << endl;
    cout << "Will you pick the red ke or the blue key?";
    
    string key;
    string winner = "red";
    cin >> key;
    if (key == winner){
      cout << "Yes! The car starts!" << endl;
    }
    else {
      cout << "You can have the car if you can carry it home!" << endl;
    }
    
    
    return; }

  // run this door #2
  void choose_door2() {
    cout << "You picked Door Number two!" << endl;
    return; 
  


  
  
}