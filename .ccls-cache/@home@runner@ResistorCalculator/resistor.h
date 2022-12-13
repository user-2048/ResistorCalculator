#ifndef RESISTOR_H
#define RESISTOR_H

#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int resistorCalculator(); 

void printColours();

void initColour1(map<string, string> &colour1);
void initColour2(map<string, string> &colour2);
void initColour3(map<string, double> &colour3);
void initColour4(map<string, double> &colour4);

void user_input(string &c1, string &c2, string &c3, string &c4);

int checkLength(vector<string> inputLine);
int checkColours(map<string, string> colour1, map<string, string> colour2, map<string, double> colour3, map<string, double> colour4, string c1, string c2, string c3, string c4);

double calc_resistor_val(map<string, string> colour1, map<string, string> colour2, map<string, double> colour3, string c1, string c2, string c3);

void output(double rVal, map<string, double> colour4, string c4);
void go_back_to_main();

#endif