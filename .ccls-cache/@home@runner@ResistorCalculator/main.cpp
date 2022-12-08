/*********************************************************/
/* Resistor Calculator - Karolina Mungai Ndungu          */
/* Module: ELEC2645 Embedded Systems.                    */
/*                                                       */
/* This menu item will calculate the value of a 4-band   */
/* resistor, when the user inputs the 4 colours.         */
/*********************************************************/

// include relevant libraries
using namespace std;
#include <iostream>
#include <map>

// and header files

// define functions
void initc1();

// main function:
// 1. a) initialise colour1, colour2, colour3, colour4.
//    b) user input
//    c) error checking. check that the colours are valid.
//    d) calculate resistor value
//    e) output the calculated value
int main() {
  string c1;
  cout << "Resistor colour 1: " << endl;
  cin >> c1;

  map<string, string> colour1;
    colour1["black"] = '0';
    colour1["brown"] = '1';
    colour1["red"] = '2';
    colour1["orange"] = '3';
    colour1["yellow"] = '4';
    colour1["green"] = '5';
    colour1["blue"] = '6';
    colour1["violet"] = '7';
    colour1["grey"] = '8';
    colour1["white"] = '9';

  
  map<string, int>::iterator i;
  for (i = colour1.begin(); i != colour1.end(); i++) {
    cout << i->first << i->second << endl;
    
    }
  }
}

// 1a. initialisation functions: initialises each band to be a map structure.
//     The colour chooses the key to keep. Maybe delete the rest?
// void initc1() {
//   map<string, string> colour1;
//     colour1["black"] = '0';
//     colour1["brown"] = '1';
//     colour1["red"] = '2';
//     colour1["orange"] = '3';
//     colour1["yellow"] = '4';
//     colour1["green"] = '5';
//     colour1["blue"] = '6';
//     colour1["violet"] = '7';
//     colour1["grey"] = '8';
//     colour1["white"] = '9';
// }

//  void initc2() {
//    map<string, int> colour1;
//     colour1["black"] = 0;
//     colour1["brown"] = 1;
//     colour1["red"] = 2;
//     colour1["orange"] = 3;
//     colour1["yellow"] = 4;
//     colour1["green"] = 5;
//     colour1["blue"] = 6;
//     colour1["violet"] = 7;
//     colour1["grey"] = 8;
//     colour1["white"] = 9;
//  }

// initc3()
// initc4()

// 1b. user input
// get user input()

// 1c. error handling - done for each band (1 and 2 are the same)
// i - errorc1c2()
// ii - errorc3()
// iii- errorc4()

// 1d. calculate the resistor value.
// resistorValue()

// 1e. output resistor value.