#include <iostream>

using namespace std;

#define size 2

int main() {
	int A[] = {0, 10};
	int B[] = {1, 11};
	int i;

	for (i = 0;  i < size; i++)
		cout << "idx: " << i << " val for A: " << A[i] << " ";
	
	cout << endl;

	for (i = 0;  i < size; i++)
		cout << "idx: " << i << " val for B: " << B[i] << " ";

	cout << endl;

	A[2] = 4;
	A[3] = 4;
	A[4] = 4;
	A[5] = 4;

	for (i = 0;  i < size; i++)
		cout << "idx: " << i << " val for A: " << A[i] << " ";

	cout << endl;

	for (i = 0;  i < size; i++)
		cout << "idx: " << i << " val for B: " << B[i] << " ";

	cout << endl;

	return 0;
}