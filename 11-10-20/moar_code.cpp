#include <iostream>

using namespace std;

double TripleIt( double D ) {
	return D*3;
}

int main() {
	double Budget;
	double Dollars;
	cout << "Budget amount? ";
	cin >> Dollars;

	Budget = TripleIt(Dollars);
	cout << "the blah... " << Budget << endl;
	return 0;
}