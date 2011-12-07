/*******************************************************
 * Account username & password generating program
 * Programmed by Justin Patera
 * Copydown November 26th, 2k11
 *
 * Released under the terms of the MIT license
 * http://www.opensource.org/licenses/mit-license.php
 * just 'cause i'm cool like that
 *******************************************************/

#include <iostream>
#include <cstring>
#include <cctype>

#define NSIZE 15
#define SSNSIZE 9
#define USIZE 8
#define PSIZE 9

using namespace std;

void title_n_credits() {
	cout << "\
Account Generating Program.\n\
Written by Justin Patera - 11/26/11\n\n";
}

// gets a cstr line with only alpha & spaces, converts to lowercase
bool get_chars(char cstr[], int len) {
	cin.getline(cstr, len);
	len = strlen(cstr); // set to the actual length of the string
	for (int i=0; i < len; i++) {
		if ( (isalpha(cstr[i]) == 0) && (isspace(cstr[i]) == 0) ) {
			cout << "Please only enter letters or spaces.\n";
			return false;
		}
		cstr[i] = tolower(cstr[i]);
	}
	return true;
}

// gets a cstr line with only numeric chars
bool get_num(char nstr[], int len) {
	cin.getline(nstr, len);
	len = strlen(nstr);
	for (int i=0; i < strlen(nstr); i++) {
		if ( isdigit(nstr[i]) == 0 ) {
			cout << "Please only enter digits.\n";
			return false;
		}
	}
	return true;
}

int main() {
	char	FIRST[NSIZE],
		LAST[NSIZE],
		SSN[SSNSIZE],
		UNAME[USIZE],
		PWORD[PSIZE];
	int	PS, PT;

	title_n_credits();
	do { cout << "First Name? "; } while ( !get_chars(FIRST, NSIZE) );
	do { cout << "Last Name? "; } while ( !get_chars(LAST, NSIZE) );
	do { cout << "Social Security # (digits only)? ";
		} while ( !get_num(SSN, SSNSIZE) );

	// set up username
	PT = 0;
	for (PS=0; (PS < 4) && (PS < strlen(LAST)); PS++) {
		// add to string if it is an alphabetic char
		if (isalpha(LAST[PS]) != 0)
			UNAME[PT] = LAST[PS];
		PT++;
	}
	for (PS = 5; PS < SSNSIZE; PS++) {
		UNAME[PT] = SSN[PT];
		PT++;
	}
	UNAME[PT] = '\0';

	// set up password
	PT = 0;
	for (PS = 0; PS < 5; PS++) {
		PWORD[PT] = SSN[PS];
		PT++;
	}
	for (PS=0; (PS < 4) && (PS < strlen(FIRST)); PS++) {
		// add to string if it is an alphabetic char
		if (isalpha(FIRST[PS]) != 0)
			PWORD[PT] = FIRST[PS];
		PT++;
	}
	PWORD[PT] = '\0';

	cout << "\n\
Username: " << UNAME << endl <<
"Password: " << PWORD << endl;

	return 0;
}