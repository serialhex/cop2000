/****************************************************
 * One Month Calendar App
 * Written by Randolph Gibson
 * Programmed by Justin Patera
 * 
 * this code is awesome...  because i am awesome!! :D
 ****************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int DAYNUM = 1;
	int COL = 1;
	int QDAYS;
	int DAY1;

	system( "cls" );

	// heading
	cout << "\
ONE MONTH CALENDAR\n\
==================\n\
\n\
Written by Randolph Gibson\n\
Coded by Justin Patera\n\
\n\
Select from the menu below the numeral indicating which day of the week\n\
should appear as the first day of the month on your calendar.\n\n";

	// menu
	cout << "\
FIRST DAY OF MONTH MENU\n\
\n\
1. Sunday\n\
2. Monday\n\
3. Tuesday\n\
4. Wednesday\n\
5. Thursday\n\
6. Friday\n\
7. Saturday\n\
\n\
Numeral (1-7)? ";
	cin >> DAY1;

	cout << "\nHow many days are in this month (28-31)? ";
	cin >> QDAYS;
	cout << endl;

	// a bit of pre-processing & logic setup...
	int line = 1; // sets the line number, to keep track of where we are at
	DAYNUM = DAYNUM - DAY1 +1; // sets the date to a (possibly) neg number,
		// so that we can do simple math on DAYNUM & QDAYS and not have to worry
		// about +- shifting of info (it also make the code more readible IMHO)

	// main loop
	do {
		// horizontal bars
		if (((line % 3) == 0 ) || (line == 1)) {
			for (COL = 1; COL <= 7; COL++) {
				cout << "+---------";
			}
			cout << "+\n";
		}
		// date bar
		else if (line == 2) {
			cout << "|   SUN   |   MON   |   TUE   |   WED   |   THU   |   FRI   |   SAT   |\n";
		}
		// dates
		else if ((line % 3) == 1) {
			for (COL = 1; COL <= 7; COL++) {
				if ((DAYNUM > 0) && (DAYNUM <= QDAYS)) {
					cout << "|" << setw(9) << left << DAYNUM;
				}
				else
					cout << "|         ";
				DAYNUM++;
			}
			cout << "|\n";
		}
		// whitespace lines
		else if ((line % 3) == 2) {
			for (COL = 1; COL <= 7; COL++) {
				cout << "|         ";
			}
			cout << "|\n";
		}
		line++;
	} while (DAYNUM <= QDAYS);

	for (COL = 1; COL <= 7; COL++) {
		cout << "|         ";
	}
	cout << "|\n";
	for (COL = 1; COL <= 7; COL++) {
		cout << "+---------";
	}
	cout << "+\n";
}