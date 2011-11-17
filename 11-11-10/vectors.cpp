#include <iostream>
#include <vector>

using namespace std;

#define size 20

int main() {
	int i = size;

	vector<int> N(i);

	for (i = 0; i < size; i++)
		N[i] = (i+1)*10;

	for (i = 0; i < size; i++)
		cout << N[i] << endl;

	return 0;
}