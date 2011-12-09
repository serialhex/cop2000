#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int c;
	char t;
	char w[] = "abcde";

	/*t = w[0];
	for (c=0;c<4;c++)
		w[c] = w[c+1];
	w[4] = t;*/

	c=0;
	t=w[c];
while (w[c] != '\0') 
	{
		w[c]= w[c+1];
		c++;
	}
	w[c-1]=t;
	cout << w << endl;

	return 0;
}