// moar function stuff

#include <iostream>

using namespace std;

// prototypes
void intro();
double getnum();
void triple(double&);
void show(double);

int main() {
	double num, ans;
	intro();
	num = getnum();
	triple(num);
	show(num);
	return 0;
}

void intro() {
	cout << "Tripling program\n\n";
}

double getnum() {
	cout << "Number? ";
	double n;
	cin >> n;
	return n;
}

void triple(double &v) {
	v *= 3;
}

void show(double r) {
	cout << "\nTripled value is: " << r << endl;
}