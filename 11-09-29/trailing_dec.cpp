// stuff

#include <iostream>

using namespace std;

int main(){
	int t = 0, n = 0;
	const int SENT = 0;

	do {
		if (n != SENT)
			t += n;

		cout << "Number (" << SENT << " to stop)? ";
		cin >> n;
	} while (n != SENT);

	cout << "\nTotal: " << t << endl;
}