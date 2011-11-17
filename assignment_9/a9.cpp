/*******************************************************
 * Squares are Rectangles, but Rectangles are not
 *   nessisarily Squares program of uber-console-drawing
 * Programmed by Justin Patera
 * Copyleft November 11th, 2k11
 *
 * Released under the terms of the MIT license
 * http://www.opensource.org/licenses/mit-license.php
 * just 'cause i'm cool like that
 *******************************************************/

#include <iostream>

using namespace std;

const int MINDIM = 2;
const int MAXDIM = 20;

void Intro(int MIN, int MAX) {
	cout << "\
BOX DISPLAYING PROGRAM\n\
\n\
This program will display a rectangle made from a symbol\n\
specified by the user and of a width and depth specified\n\
by the user. The program will accept user input of width\n\
and depth values between "<<MIN<<" and "<<MAX<<" (inclusive) only.\n\n";
}

char AskSymbol() {
	char S;
	cout << "Symbol to display? ";
	cin >> S;
	return S;
}

void AskSizes(int MIN, int MAX, int *WPTR, int *DPTR) {
	int D, W;

	// get width
	do {
		cout << "Width (" << MIN << "-" << MAX << ")? ";
		cin >> W;
		if (( W < MIN ) || ( W > MAX )) {
			cout << "INVALID ENTRY: enter a value between ";
			cout << MIN << " and " << MAX << " inclusive.\a\n";
		}
	} while (( W < MIN ) || ( W > MAX ));

	// get depth
	cout << "Depth (" << MIN << "-" << MAX << ")? ";
	cin >> D;
	while (( D < MIN ) || ( D > MAX )) {
		cout << "INVALID ENTRY: enter a value between ";
		cout << MIN << " and " << MAX << " inclusive.\a\n";
		cout << "Depth (" << MIN << "-" << MAX << ")? ";
		cin >> D;
	}

	// assign vars
	*DPTR = D;
	*WPTR = W;
}

void TopBot(char S, int W) {
	int I = 1;
	while (I <= W) {
		cout << S;
		I++;
	}
	cout << endl;
}

void Slice(char S, int W) {
	cout << S;
	int I = 1;
	while (I <= W-2) {
		cout << " ";
		I++;
	}
	cout << S << endl;
}

int main() {
	int C = 1;
	char SYMB;
	int WIDE, DEEP;

	Intro(MINDIM, MAXDIM);

	SYMB = AskSymbol();
	AskSizes(MINDIM, MAXDIM, &WIDE, &DEEP);

	cout << endl;

	TopBot(SYMB, WIDE);
	while (C <= DEEP-2) {
		Slice(SYMB, WIDE);
		C++;
	}
	TopBot(SYMB, WIDE);

	return 0;
}