/********************************
 *  Applicant Screening Program
 *  Written by: Randolph Gibson
 *  Programed by: Justin Patera
 *  Date: September 29, 2011
 ********************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

#define SMWD 1000.00
#define SMWO 600.00
#define ADULT 18

int main() {
	char DEG;
	double SAL;
	int AGE, WHN;

	system("cls");

	cout << "Applicant Screening Program\n\n";

	cout << "How old are you? ";
	cin >> AGE;

	if ( AGE >= ADULT ) {
		cout << "Do you have a college degree? (Y/N) ";
		cin >> DEG;
		if ( DEG == 'y' or DEG == 'Y' ) SAL = AGE * SMWD;
		else SAL = AGE * SMWO;
		cout << "\nYou qualify!\n";
		cout << setprecision(2)<< fixed;
		cout << "Your salary would be $" << SAL << ".\n";
		cout << "See our staff for an application.\n";
	}
	else {
		WHN = ADULT - AGE;
		cout << "\nSorry, you must be " << ADULT << " or older for this job.\n";
		cout << "Please apply again in " << WHN << " years.\n";
	}

	return 0;
}
