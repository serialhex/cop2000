
#include <fstream>

int main(){
	// input files
	int x;
	ifstream inFile;
	inFile.open("f:\\projects\\myfile.txt");

	inFile >> x;
	inFile.close();

	// output files
	int n;
	ofstream outFile;
	outFile << n;
	outFile.close();

	// getting filenames
	string Filename;
	cout << "Filename? ";
	cin >> Filename;
	// regex magik on Filename
	ofstream outFile;
	outfile.open(Filename.c_str())
}