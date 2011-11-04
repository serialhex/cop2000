#include <iostream>

using namespace std;

#define size 5

void show_arr(int arr[]) {
	int c;
	for (c = 0;  c < size; c++) {
		cout << arr[c] << endl;
	}
	cout << endl;
}

void search() {
	int A[] = { 8, 5, 20, 12, 8};
	int S;
	int C = 0, H = 0;

	cout << "Search value? ";
	cin >> S;

	for (C = 0;  C < size ; C++) {
		if (A[C] == S)
			H++;
	}
	cout << S <<" found " << H << " times\n";
}

void found() {
	int A[] = { 8, 5, 20, 12, 8};
	int S;
	int C = 0;
	bool H = false;

	cout << "Search value? ";
	cin >> S;

	while (C < size && !H)
		S == A[C] ? H = true : C++;

	cout << S << " was ";
	if (!H) cout << "not ";
	cout << "found.\n";
}

void wher() {
	int A[] = { 8, 5, 20, 12, 8};
	bool W[size];
	int S;
	int C = 0;
	bool F = false;

	cout << "Search value? ";
	cin >> S;

	for (C = 0;  C < size ; C++) {
		if (S == A[C]) {
			W[C] = true;
			F = true;
		}
		else W[C] = false;
	}

	if (F) {
		cout << S << " was found at index(es): ";
		for (C = 0;  C < size ; C++) {
			if (W[C]) cout << C << ' ';
		}
	}
	else cout << S << " was not found.";
	cout << endl;
}

int main() {
	int A[size], B[size];
	int c;

	for (c = 0;  c < size; c++) A[c] = c*10 +10;
	show_arr(A);
	for (c = 0;  c < size; c++) B[c] = A[size - c - 1];
	show_arr(B);

	int t;
	for (c = size-1;  c >=size/2 ; c--) {
		t = A[c];
		A[c] = A[size - c - 1];
		A[size - c - 1] = t;
	}
	show_arr(A);

	cout << "\nsearch\n";
	search();
	cout << "\nfound\n";
	found();
	cout << "\nwher\n";
	wher();

	return 0;
}