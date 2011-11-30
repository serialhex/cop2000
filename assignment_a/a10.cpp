/*******************************************************
 * Username & password generating program
 * Programmed by Justin Patera
 * Copydown November 26th, 2k11
 *
 * Released under the terms of the MIT license
 * http://www.opensource.org/licenses/mit-license.php
 * just 'cause i'm cool like that
 *******************************************************/

#include <iostream>
#include <cstring>

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

void get_chars(char *cstr) {
	
}

void get_num(char *nstr) {
	
}

void req_info(char *first, char *last, char *ssn) {
	cout << "First Name? ";
	get_chars(first);
	cout << "Last Name? ";
	get_chars(last);
	cout << "Social Security # (digits only)? ";
	get_num(ssn);
}

int main() {
	char	FIRST[NSIZE],
		LAST[NSIZE],
		SSN[SSNSIZE],
		UNAME[USIZE],
		PWORD[PSIZE]
	int	PS = 0,
		PT = 0;

	title_n_credits();
	req_info(&FIRST, &LAST, &SSN);

	return 0;
}