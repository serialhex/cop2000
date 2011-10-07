// 

#include <fstream>

// using F:\projects\data.txt

// works just like cin & cout objects
ifstream inFile;

inFile.open("F:\\projects\\data.txt");

// or

string FN;
cout << "Filename: ";
cin >> Fn;
inFile.open(FN.c_str());

if (!inFile) {
	// file read fail
}

// gives true/false stuff
inFile.fail();

inFile.close();