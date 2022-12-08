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
#include <string>

// and header files

// define functions
void initc1();

// main function:
// 1. a) print all the colours in the four bands
//    b) initialise colour1, colour2, colour3, colour4.
//    c) user input
//    d) error checking. check that the colours are valid.
//    e) calculate resistor value
//    f) output the calculated value
int main() {
  // a) print all the colours in the four bands
    cout << "Band 1: black, brown, red, orange, yellow, green, blue, violet, "
          "grey, white\n";
  cout << "Band 2: black, brown, red, orange, yellow, green, blue, violet, "
          "grey, white\n";
  cout << "Band 3: black, brown, red, orange, yellow, green, blue, violet, "
          "grey, white, gold, silver\n";
  cout << "Band 4: red, brown, green, blue, violet, grey, gold, silver\n\n";
  
  
  // b) initialise colour1, colour2, colour3, colour4.
  map<string, string> colour1; // band 1
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

  map<string, string> colour2; // band 2
  colour2["black"] = '0';
  colour2["brown"] = '1';
  colour2["red"] = '2';
  colour2["orange"] = '3';
  colour2["yellow"] = '4';
  colour2["green"] = '5';
  colour2["blue"] = '6';
  colour2["violet"] = '7';
  colour2["grey"] = '8';
  colour2["white"] = '9';
  
  map<string, string> colour3; // multiplier
  colour3["black"] = '0';
  colour3["brown"] = '1';
  colour3["red"] = '2';
  colour3["orange"] = '3';
  colour3["yellow"] = '4';
  colour3["green"] = '5';
  colour3["blue"] = '6';
  colour3["violet"] = '7';
  colour3["grey"] = '8';
  colour3["white"] = '9';
  colour3["gold"] = '9';
  colour3["silver"] = '10';
  
  map<string, string> colour4; // tolerance
  colour4["black"] = '0';
  colour4["brown"] = '1';
  colour4["red"] = '2';
  colour4["orange"] = '3';
  colour4["yellow"] = '4';
  colour4["green"] = '5';
  colour4["blue"] = '6';
  colour4["violet"] = '7';
  colour4["grey"] = '8';
  colour4["gold"] = '9';
  colour4["silver"] = '11';
  

  // c) user input
  string c1, c2, c3, c4;
  cout << "Enter colour code: ";
  cin >> c1 >> c2 >> c3 >> c4;

  // d) error checking. check that the colours are valid.
    if (colour1.count(c1) == 0) { // band 1
    cout << c1 << " is an invalid colour.\n";
    return (1);
  } else {
    cout << c1 << " does exist and has a value of " << colour1[c1] << endl;
  }

  if (colour2.count(c2) == 0) { // band 2
    cout << c2 << " is an invalid colour.\n";
    return (1);
  } else {
    cout << c2 << " does exist and has a value of " << colour2[c2] << endl;
  }

  if (colour3.count(c3) == 0) { // band 3
    cout << c3 << " is an invalid colour.\n";
    return (1);
  } else {
    cout << c3 << " does exist and has a value of " << colour3[c3] << endl;
  }

  if (colour4.count(c4) == 0) { // band 4
    cout << c4 << " is an invalid colour.\n";
    return (1);
  } else {
    cout << c4 << " does exist and has a value of " << colour4[c4] << endl;
  }
  
  // e) calculate resistor value
  // f) output the calculated value

  return (0);
}
