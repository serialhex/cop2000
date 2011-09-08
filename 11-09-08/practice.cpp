// practice

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double F;
	int Q;
	char MI;
	cout << "number 1: ";
	cin >> F >> Q;
	cout << '[' << setw(12) << left << setprecision(5) << fixed <<F << ']' << endl;
	cout << Q << endl;
	cout << "enter char: ";
	cin.get();
	cin >> MI;
	cout << MI << endl;
	return 0;
}