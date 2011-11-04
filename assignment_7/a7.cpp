/*******************************************************
 * Incredible Math Helping Lerning Program
 * Programmed by Justin Patera
 * Copyleft November 3rd, 2k11
 *
 * Released under the terms of the MIT license
 * http://www.opensource.org/licenses/mit-license.php
 * just 'cause i'm cool like that
 *******************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

// symbolic constants
// the "Quit" menu choice
#define SENT 4

using namespace std;

void DisplayMenu() {
	cout << "\
MENU OF OPERATIONS\n\
\n\
1. Addition.\n\
2. Subtraction.\n\
3. Multiplication.\n\
4. Quit.\n\n";
}

int GetMenuChoice() {
	int c;
	do {
		cout << "Enter the number of the operation to try (1-4): ";
		cin >> c;
		if ((c < 1) || (c > SENT))
			cout << "\aInput value is out of range.\n";
	} while ((c < 1) || (c > SENT));
	return c;
}

void Gen2Rand(int &r1, int &r2) {
	srand(time(0));
	r1 = rand() %11 +2;
	r2 = rand() %11 +2;
}

void DrillOneProb(int c, int r1, int r2) {
	int CorAns, Reply;

	cout << "\nWhat is " << r1 << ' ';

	switch(c) {
		case 1:
			cout << '+';
			CorAns = r1 + r2;
			break;
		case 2:
			cout << '-';
			CorAns = r1 - r2;
			break;
		default:
			cout << 'x';
			CorAns = r1 * r2;
			break;
	}

	cout << ' ' << r2 << "? ";
	cin >> Reply;

	if (Reply == CorAns)
		cout << "Yes, that is correct.  Good job!";
	else
		cout << "No, the correct answer is: " << CorAns;
	cout << "\n\n";
}

int main() {
	int c, r1, r2;

	DisplayMenu();
	c = GetMenuChoice();
	while ((c >= 1) && (c < SENT)) {
		Gen2Rand(r1, r2);
		DrillOneProb(c, r1, r2);
		DisplayMenu();
		c = GetMenuChoice();
	}

	cout << "Program complete.\n";
}