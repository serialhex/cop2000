
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	system("clear");

	// if statements
	int a, b;

	a = b = 0;

	if (a == 0)
		if (b == 0) cout << "yes\n";
		else cout << "no\n";
	else cout << "no\n";


	// case statements
	int N; /* Menu Choice */

	cout << "MENU OF TERMS\n\n";

	cout << "1. Single\n";
	cout << "2. Double\n";
	cout << "3. Triple\n";
	cout << "4. Quadruple\n\n";

	cout << "Enter the number of the term you want explained (1-4)? ";
	cin >> N;
	cout << "\nThat word means to multiply by ";

	switch (N) {
		case 1: cout << "one"; break;
		case 2: cout << "two"; break;
		case 3: cout << "three"; break;
		case 4: cout << "four"; break;
		default: cout << "ERROR"; break;
	}

	cout << ".\n";

	return 0;
}