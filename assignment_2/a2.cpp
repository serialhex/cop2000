/*******************************************************
 * An awesome meter to feet && inches calculator
 * Programmed by Justin Patera
 * Copyleft September 14, 2011
 *
 * Released under the terms of the MIT license
 * http://www.opensource.org/licenses/mit-license.php
 * just 'cause i'm cool like that
 *******************************************************/


#include <iostream>

// constant
#define FACTOR 2.54

using namespace std;


int main() {

	// declare variables
	float HM;
	int INCHES, FEET;

	// print intro message
	cout << endl;
	cout << "Height Converting Program" << endl;
	cout << "Designed by Randolph Gibson - 1 August 2011" << endl;
	cout << "Coded by Justin Patera - 2011-09-13" << endl;
	cout << endl;
	cout << "This program will convert a person\'s height from meters" << endl;
	cout << "into feet and inches (rounded to the nearest inch) and" << endl;
	cout << "display the results on the screen. The height must be" << endl;
	cout << "entered in metric units and may contain decimal portions." << endl;
	cout << "The answer will be displayed in whole feet and whole inches." << endl;
	cout << endl;

	// the Q
	cout << "Enter the person\'s height in meters: ";
	cin >> HM;

	// the fun maths
	INCHES = static_cast<int>((HM * 100 / FACTOR)+0.5);
	FEET = INCHES / 12;
	INCHES %= 12;

	cout << "\nThat height is equivalent to " << FEET << " feet and " << INCHES << " inch(es).\n" << endl;

	return 0;
}
