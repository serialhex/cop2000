/**************************************************
 * An awesome meter to feet && inches calculator
 *
 **************************************************/


#include <iostream>

// 
#define FACTOR 2.54

using namespace std;


int main() {

	// declare variables
	float meter_h;
	int inches, feet;

	// print intro message
	cout << "\
\tHeight Converting Program\n\
\tDesigned by Randolph Gibson - 1 August 2011\n\
\tCoded by Justin Patera - 2011-09-13\n\
\n\
\tThis program will convert a person's height from meters\n\
\tinto feet and inches (rounded to the nearest inch) and\n\
\tdisplay the results on the screen. The height must be\n\
\tentered in metric units and may contain decimal portions.\n\
\tThe answer will be displayed in whole feet and whole inches.\n\
\n";

	// the Q
	cout << "Enter the person's height in meters: ";
	cin >> meter_h;

	// the fun maths
	inches = static_cast<int>(meter_h * 100 / FACTOR);
	feet = inches / 12;
	inches %= 12;

	cout << "\nThat height is equivalent to " << feet << " feet and " << inches << " inch(es).\n";

	return 0;
}
