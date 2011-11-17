#include <iostream>
#include <vector>

using namespace std;

const int SIZE=4;

void swap_cpp(int &a, int &b) {
	int t;
	t = a;
	a = b;
	b = t;
}

void swap_c(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void dispArray(int L[], int x) {
	int c;
	for (c=0; c<x; c++)
		cout << L[c];
}

// this segfaults...
void dispArray_ptr(int *Lptr, int x) {
	int i;
	int *EndPtr = Lptr;
	for (i=0; i<x; i++)
		EndPtr++;

	int *c;
	for (c=Lptr; c<EndPtr; Lptr++)
		cout << *Lptr;
}

int main() {
	int i = SIZE;
	int x,y;
	int A[SIZE] = {10,20,30,40};

	x = 5;
	y = 7;
	swap_c(&x, &y);
	swap_cpp(x, y);

	dispArray(A, SIZE);
	cout << endl << endl;
	//dispArray_ptr(&A[0], SIZE);

	int *p = &x;
	cout << *p << endl;
	cout << *p++ << endl;
	
	cout << endl << endl;

	return 0;
}