#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main() {

	// define a c-string
	char A[] = "Hello";
	// or char A[6] = "Hello";
	cout << A;

	char age[4];
	cout << "How old are you? ";
	cin >> age;

	int c = 0;
	while (c<4 && age[c] != '\0') {
		if (!isdigit(age[c]))
			cout << "foo\n";
		c++;
	}

	char name[15] = "Jack";
	cout << name[2];
	// to uppercase
	cout << toupper(name[2]);

	int n;
	for (n=0; n < strlen(name); n++)
		name[n] = toupper(name[n]);

	// c-string concatenation
	// p 552
	char f[10] = "Bob";
	char l[10] = "Jones";
	char full[20];
	strcpy(full, f);
	strcat(full, " ");
	strcat(full, l);
	// full == "Bob Jones"

	char date[11] = "10/24/1972";
	// won't change 24 to 12:
	//strcpy(date, "12");
	// won't work either:
	//strcpy(&date[3], "12");
	strncpy(&date[3], "12", 2);  // dosn't terminate, thus good

	char date2[11] = "3/24/1972"; // improper!!
	c=strlen(date2);
	while (c>=0) {
		date[c+1]=date[c];
		c--;
	}
	date[0] = '0';

	// wont do what you think it does...
	if ("AA">"A")
		cout << "true\n";
	// this works...
	if (strcmp("b", "a")==0)
		cout << "equivalent\n"

	return 0;
}