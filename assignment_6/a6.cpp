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
\n";
	do {
		cout << "Numeral (1-7)? ";
		cin >> DAY1;
	} while ((1 > DAY1) || (DAY1 > 7));

	do {
		cout << "\nHow many days are in this month (28-31)? ";
		cin >> QDAYS;
	} while ((28 > QDAYS) || (QDAYS > 31));
	cout << endl;

	// the heading... 
	for (int l = 1; l <=3; l++) {
		if (l % 2 == 1) {
			for (COL = 1; COL <= 7; COL++) {
				cout << "+---------";
			}
			cout << "+\n";
		}
		else {
			cout << "|   SUN   |   MON   |   TUE   |   WED   |   THU   |   FRI   |   SAT   |\n";
		}
	}

// continue from here
	DAYNUM = 1;

	// main loop
	while (DAYNUM <= QDAYS) {
		for (COL = 1; COL <= 7; COL++) {
			cout << '|';
			if ((DAYNUM == 1 && COL < DAY1) || (DAYNUM > QDAYS)) {
				cout << "         ";
			}
			else {
				cout << setw(9) << left << DAYNUM;
				DAYNUM++;
			}
		}
		cout << "|\n"; // END OF LINE

		for (COL = 1; COL <= 7; COL++)
			cout << "|         ";
		cout << "|\n"; // END OF LINE

		for (COL = 1; COL <= 7; COL++)
			cout << "+---------";
		cout << "|\n"; // END OF LINE
	}
}