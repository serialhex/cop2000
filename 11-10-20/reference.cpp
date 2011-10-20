#include <iostream>

using namespace std;

void swap(int &F, int &S) {
	int T;
	T = F;
	F = S;
	S = T;
}

int main() {
	int Num1, Num2;
	cout << "Number 1? ";
	cin >> Num1;
	cout << "Number 2? ";
	cin >> Num2;
	swap(Num1, Num2);
	cout << "Number 1? " << Num1 << endl;
	cout << "Number 2? " << Num2 << endl;
}