/* calendaring stuff */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int day = 1;
	int c;
	int EOM = 28;

	do {
		for (c = 1; c <= 7; c++) {
			cout << "+---";
		}
		cout << "+\n";

		for (c = 1; c <= 7; c++) {
			if (day <= EOM)
				cout << "|" << day;
			else
				cout << "|   ";
			day++;
		}
		cout << "|\n";

		for (c = 1; c <= 7; c++) {
			cout << "|   ";
		}
		cout << "|\n";
	} while (day  <= EOM);

	for (c = 1; c <= 7; c++) {
		cout << "+---";
	}
	cout << "+\n";
}