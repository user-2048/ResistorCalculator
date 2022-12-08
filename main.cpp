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
  
  map<string, double> colour3; // multiplier
  colour3["black"] = 1;
  colour3["brown"] = 10;
  colour3["red"] = 100;
  colour3["orange"] = 1000; // 1kOhm
  colour3["yellow"] = 10000; // 10k
  colour3["green"] = 100000; // 100k
  colour3["blue"] = 1000000; // 1MOhm
  colour3["violet"] = 10000000; // 10M
  colour3["grey"] = 100000000; // 100M
  colour3["white"] = 1000000000; // 1GOHm
  colour3["gold"] = 0.1;
  colour3["silver"] = 0.01;
  
  map<string, double> colour4; // tolerance (these are all +/- the percentage)
  colour4["red"] = 2;
  colour4["brown"] = 1;
  colour4["green"] = 0.5;
  colour4["blue"] = 0.25;
  colour4["violet"] = 0.1;
  colour4["grey"] = 0.05;
  colour4["gold"] = 5;
  colour4["silver"] = 10;

  // c) user input
  string c1, c2, c3, c4;
  cout << "Enter colour code: ";
  cin >> c1 >> c2 >> c3 >> c4;

  // d) error checking. check that the colours are valid.
  if (colour1.count(c1) == 0) { // band 1
    cout << c1 << " is an invalid colour.\n";
    return (1);
  }

  if (colour2.count(c2) == 0) { // band 2
    cout << c2 << " is an invalid colour.\n";
    return (1);
  }

  if (colour3.count(c3) == 0) { // band 3
    cout << c3 << " is an invalid colour.\n";
    return (1);
  }

  if (colour4.count(c4) == 0) { // band 4
    cout << c4 << " is an invalid colour.\n";
    return (1);
  }
  
  // e) calculate resistor value
  string c1c2Val = colour1[c1] + colour2[c2];
  double rVal = stod(c1c2Val);

  rVal = rVal*colour3[c3];
  
  // f) output the calculated value
  cout << "Calculated resistor value = " << rVal << ", +/-" << colour4[c4] << "%\n"; 

  return (0);
}
