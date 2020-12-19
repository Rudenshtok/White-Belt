#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReversibleString {
private:
    string data;
public:
    ReversibleString() {}
    ReversibleString(const string& s) {
    data = s;
    }
    void Reverse () {
        reverse(begin(data), end(data));
    }
    string ToString () const {
        return data;
    }
};