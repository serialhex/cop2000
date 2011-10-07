// stuff

#include <iostream>

using namespace std;

int main(){
	int n;
	int t = 0, q = 0;

	string msg = "Number (0 to stop)? ";

	cout << msg;
	cin >> n;

	while (n != 0) {
		if ( n % 2 == 0 ){
			q++;
			t += n;
		}
		cout << msg;
		cin >> n;
	}

	cout << "\n" << q << " even numbers entered totaling " << t << endl;
}