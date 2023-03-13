#include <iostream>
using namespace std;

// CSC134
// M5T1
// Noha Goumaa
// 03/13/2023
// purpose: to use a few void and value returning functions

void say_hello();               // prints hello
int double_a_number(int num);          // returns number 2 times
int add(int num1, int num2);    // returns sum of 2 ints


int main()
{
    // cout << "Hello world!" << endl;
    say_hello();
    int num = double_a_number(2);
    return 0;
}

// define functions. like a dictionary, the definition is the long version
void say_hello() {
    // just print hello to stdout
    cout << "Hello!" << endl;
    int my_num = 3;
    cout << my_num << " doubled is : " << double_a_number(my_num) << endl;
    cout << "Give me two ints: ";
    int first, second;
    cin >> first >> second;

    int sum = add (first,second);
    cout << first << " + " << second << " = ";
    cout << sum << endl;

    return; // void return is implied
}

int double_a_number(int num) {
    /*
        input: an integer
        output: the int times two
    */

    int answer = num * 2;
    return answer;
}

int add( int num1, int num2) {
    /*
        input: an integer
        output: the int times two
    */
    int sum = num1 + num2;
    return sum;

}

