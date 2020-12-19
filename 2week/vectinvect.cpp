#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (int n = 0; n < source.size(); ++n) {
        destination.push_back(source[n]);
    }
    source = {};
    source.clear();
}


int main() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    for(int i = 0; i < destination.size(); ++i) {
        cout << destination[i] << ' ';
    }
    return 0;
}
