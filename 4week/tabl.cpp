#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main () {
	ifstream input ("input.txt");
	string line;
	int N, M;
	input >> N >> M;
	input.ignore(1);
	for (int i = N; i > 0; --i) {
		for (int k = M; k > 0; --k) {
			getline(input, line, ',');
			cout << setw(10) << line << "\n";
		}
		getline(input, line);
		cout << setw(10) << line << "\n";
	}
	return 0;
}
