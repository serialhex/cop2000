#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	int c = 0,
		t = 0,
		s, a;

	cout << "\
	BOWLING TEAM AVERAGE PROGRAM\n\
	============================\n\
\n\
	This program will repeatedly request and store the score of\n\
	an individual bowler and accumulate and count each one until\n\
	the user enters a negative score. After that, the program will\n\
	calculate and display the rounded team average.\n\n";

	cout << "Player's score (negative number when done)? ";
	cin >> s;

	while ( s >= 0 ) {
		t += s;
		c++;
		cout << "Player's score (negative number when done)? ";
		cin >> s;
	}

	if ( c > 0 ) {
		a = static_cast<int>(((t + 0.0) / c) + 0.5);
		cout << "\nTeam average: " << a << endl;
	}
}