/*********************************************************/
/* Resistor Calculator - Karolina Mungai Ndungu          */
/* Module: ELEC2645 Embedded Systems.                    */
/*                                                       */
/* This menu item will calculate the value of a 4-band   */
/* resistor, when the user inputs the 4 colours.         */
/*********************************************************/

// include relevant libraries - most included in "resistor.h"
using namespace std;

// and header files
#include "resistor.h"

// main function:
// 1. a) print all the colours in the four bands
//    b) initialise colour1, colour2, colour3, colour4.
//    c) user input
//    d) error checking. check that the colours are valid.
//    e) calculate resistor value
//    f) output the calculated value
int main() {

  // put all the code is in a separate function so it can be easily called
  // in the final group code.
  resistorCalculator();

  return (0);
}