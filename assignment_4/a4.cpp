/********************************
 *  Applicant Screening Program
 *  Written by: Randolph Gibson
 *  Programed by: Justin Patera
 *  Date: September 29, 2011
 ********************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char DEG;
	float SAL;
	int AGE, WHN;
	const int ADULT=18;
	const float SMWD=1000.00;
	const float SMWO=600.00;

	system("cls");

	cout << "Applicant Screening Program\n";
	cout << "How old are you? ";
	cin >> AGE;

	if ( AGE >= 18 ) {
		cout << "Do you have a college degree? (Y/N)";
		cin >> DEG;
		if ( DEG == 'y' or DEG == 'Y' ) SAL = AGE * SMWD;
		else SAL =AGE * SMWO;
		cout << "You qualify!\n" << "Your salary would be $" << SAL << ".\n";
		cout << "See our staff for an application.\n";
	}
	else {
		WHN = ADULT - AGE;
		cout << "Sorry, you must be " << ADULT << " or older for this job.\n";
		cout << "Please apply in " << WHN << " years.\n";
	}

	return 0;
}
