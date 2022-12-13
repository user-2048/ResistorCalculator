#include "resistor.h"

using namespace std;

int resistorCalculator() {
  // a) print all the possible colour bands
  printColours();
  
  // b) initialise colour1, colour2, colour3, colour4.
  map<string, string> colour1; // band 1
  initColour1(colour1);
  map<string, string> colour2; // band 2
  initColour2(colour2);
  map<string, double> colour3; // multiplier
  initColour3(colour3);
  map<string, double> colour4; // tolerance (these are all +/- the percentage)
  initColour4(colour4);

  // c) user input
  string c1, c2, c3, c4;
  cout << "Enter colour code: ";
  cin >> c1 >> c2 >> c3 >> c4;

  // d) error checking. i- check the number of inputs ii- check that the colours are valid.
  // https://www.mygreatlearning.com/blog/vectors-in-c/#:~:text=Vectors%20in%20C%2B%2B%20are%20sequence,regular%20pointers%20to%20its%20elements.
  vector<string> inputLine{c1, c2, c3, c4};
  if (checkLength(inputLine) != 0) {
    return 1;
  }
  if (checkColours(colour1, colour2, colour3, colour4, c1, c2, c3, c4) != 0) {
    go_back_to_main();
  }
  
  // e) user has valid inputs, so calculate resistor value
  double rVal = calc_resistor_val(colour1, colour2, colour3, c1, c2, c3);

  // f) output the calculated value
  output(rVal, colour4, c4);
  return 0;
}
// a) print all the colours in the four bands
void printColours() {
  cout << "\n------------------------------- Possible Resistor Colours: ---------------------------------\n"; 
  cout << "Band 1: black, brown, red, orange, yellow, green, blue, violet, grey, white\n";
  cout << "Band 2: black, brown, red, orange, yellow, green, blue, violet, grey, white\n";
  cout << "Band 3: black, brown, red, orange, yellow, green, blue, violet, grey, white, gold, silver\n";
  cout << "Band 4: red, brown, green, blue, violet, grey, gold, silver\n";
  cout << "--------------------------------------------------------------------------------------------\n";
  cout << "Input format: [colour1] [colour2] [colour3] [colour4]\n\n";
}

// b) initialise the colour bands
void initColour1(map<string, string> &colour1) {
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
}
void initColour2(map<string, string> &colour2) {
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
}
void initColour3(map<string, double> &colour3) {
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
}
void initColour4(map<string, double> &colour4) {
  colour4["red"] = 2;
  colour4["brown"] = 1;
  colour4["green"] = 0.5;
  colour4["blue"] = 0.25;
  colour4["violet"] = 0.1;
  colour4["grey"] = 0.05;
  colour4["gold"] = 5;
  colour4["silver"] = 10;
}

void user_input(string &c1, string &c2, string &c3, string &c4) {
  cout << "Enter colour code: ";
  cin >> c1 >> c2 >> c3 >> c4;
}

// d) i- check the number of colours inputted by user
int checkLength(vector<string> inputLine) {
  if (inputLine.size() != 4) {
    cout << "Invalid inputs. Expected input: [colour1] [colour2] [colour3] [colour4]\n";
    return 1;
  } else {
    return 0;
  }
}

// d) ii- check that the colours inputted are valid.
int checkColours(map<string, string> colour1, map<string, string> colour2, map<string, double> colour3, map<string, double> colour4, string c1, string c2, string c3, string c4) {
  if (colour1.count(c1) == 0) { // band 1
    cout << c1 << " is an invalid colour.\n";
    return 1;
  }

  if (colour2.count(c2) == 0) { // band 2
    cout << c2 << " is an invalid colour.\n";
    return 1;
  }

  if (colour3.count(c3) == 0) { // band 3
    cout << c3 << " is an invalid colour.\n";
    return 1;
  }

  if (colour4.count(c4) == 0) { // band 4
    cout << c4 << " is an invalid colour.\n";
    return 1;
  }

  return 0;
}

// e) calculate resistor value
double calc_resistor_val(map<string, string> colour1, map<string, string> colour2, map<string, double> colour3, string c1, string c2, string c3) {
  string c1c2Val = colour1[c1] + colour2[c2];
  double rVal = stod(c1c2Val);

  return (rVal*colour3[c3]);
}

// f) output the calculated value
void output(double rVal, map<string, double> colour4, string c4) {
  cout << "Calculated resistor value = " << rVal << ", +/-" << colour4[c4] << "%\n";
  go_back_to_main();
}

void go_back_to_main() {
	string input;
  cout << "\nEnter 'n' or 'N' for a new resistor value, or enter 'e' or 'E' to exit: ";
  cin >> input;
	if (input == "n" || input == "N") {
    resistorCalculator();
  } else if (input == "e" || input == "E") {
    exit(1);
  } else {
    cout << "invalid input.\n";
    go_back_to_main();
  }
}