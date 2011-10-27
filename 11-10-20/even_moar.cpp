#include <iostream>

using namespace std;

double Pi() {
	const float PI = 3.14159;
	return static_cast<int>(PI*1000 + 0.5) * 0.001
}

int main() {

	double Answer;
	Answer = Pi() * 5;

	return 0;
}