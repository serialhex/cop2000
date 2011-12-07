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

/* this stuff down't work as expected... holding off for now...  GRR!!!*/
// gets a cstr line with only alpha & spaces, converts to lowercase
bool get_chars(char cstr[], int len) {
	cin.getline(cstr, len);
	for (int i=0; i < (len-1); i++) {
		// null char will break this... :'(
		/*if ( (isalpha(cstr[i]) != 0) && (isspace(cstr[i]) == 0)) {
			cout << "Please only enter letters or spaces.\n";
			return false;
		}*/
		if ( islower(cstr[i]) == 0 ) cstr[i] = tolower(cstr[i]);
	}
	return true;
}

// gets a cstr line with only numeric chars
bool get_num(char *nstr) {
	cin.getline(nstr, strlen(nstr));
	for (int i=0; i < strlen(nstr); i++) {
		if ( isdigit(nstr[i]) == 0) {
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
	/* the following does not work...*/
	do { cout << "First Name? "; } while ( !get_chars(FIRST, NSIZE) );
	do { cout << "Last Name? "; } while ( !get_chars(LAST, NSIZE) );
	do { cout << "Social Security # (digits only)? "; } while ( !get_num(SSN) );
	

	/*cout << "First Name? ";
	cin >> FIRST;
	cout << "Last Name? ";
	cin >> LAST;
	cout << "Social Security # (digits only)? ";
	cin >> SSN;*/

	// set up username
	PT = 0; PS = 0;
	do {
		if ( LAST[PT] != '\0' ) UNAME[PT] = LAST[PT];
		PS++; PT++;
	} while (PS <= 3 && FIRST[PT] != '\0');
	PS = 5; //last 4 of ssn begins at 5
	do {
		UNAME[PT] = SSN[PT];
		PS++; PT++;
	} while (PS <= 8);
	UNAME[PT] = '\0';

	// set up password
	PT = 0; PS = 0;
	do {
		PWORD[PT] = SSN[PS];
		PT++; PS++;
	} while (PS <= 4);
	PT = 0; // start at the beginning
	do {
		if ( FIRST[PT] != '\0' ) PWORD[PS] = FIRST[PT];
		PT++; PS++;
	} while (PS <= 9 && FIRST[PT] != '\0');
	PWORD[PT] = '\0';

	cout << "\n\
Username: " << UNAME << endl <<
"Password: " << PWORD << endl;

	return 0;
}