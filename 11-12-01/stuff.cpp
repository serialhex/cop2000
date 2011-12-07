#include <iostream>
#include <vector>

using namespace std;

#define size 20

void ugly() {
	char D[] = "12/25/2011";
	char E[11];
	int c;
	int t = 0;
	for (c = 6; c <= 9; c++) {
		E[t] = D[c];
		t++;
	}
	E[t] = '-';
	t++;
	for (c = 0; c < 5; c++) {
		c == 2 ? E[t] = '-' : E[t] = D[c];
		t++;
	}
	E[t] = '\0';

	cout << E << endl;
}

void pretty() {
	char D[] = "12/25/2011";
	char E[11];
	strcpy(E, &D[6]);
	strcat(E, "-");
	strcat(E, D, 5);
	E[7] = '-';
	E[10] = '\0';
	strcpy(D, E);
}

void name() {
	char N[20] = "smith, joe";
	int c = 0;
	int cp;
	while ( N[c] != ',' ) c++;
	cp = c;
	c += 2
	while (N[c] != '\0') {
		cout << N[c];
		c++;
	}
	cout << ' ';
	for (c = 0; c <= cp; c++) cout << N[c];
}

void ary() {
	#define size 5
	int G[size];
	int z;
	for (z = 0; z < size; z++) G[z] = (z+1)*10;

	int u;
	for (z = 0; z<size; z++) {
		if (z+2 < size) {
			u = G[z+2];
			G[z+2] = 
		}
		else
	}
}

int recurse(int ary[]) {
	
}

int main() {
	int i = size;
	ugly();
	pretty();
	name();
	ary();

	return 0;
}