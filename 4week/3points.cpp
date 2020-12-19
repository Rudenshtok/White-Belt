#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
	ifstream input ("input.txt");
	string line;
	while (getline(input, line)) {
		double line2 = atof (line.c_str());
		cout << fixed << setprecision(3);
		cout << line2 << "\n";
	}
	return 0;
}