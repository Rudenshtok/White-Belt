#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string str_to_low(const string& s) { 
    string result;
    for (auto i : s) {
        result += tolower(i);
    }
    return result;
}
bool srt(string x, string y) {
    return str_to_low(x) < str_to_low(y);
}
int main() {
    int N;
    string str;
    vector<string> v;
    cin >> N;
    for (N; N > 0; --N) {
        cin >> str;
        v.push_back(str); 
    }
    sort(begin(v), end(v), srt);
    for (const auto& i : v) {
        cout << i << " ";
    }
    return 0;
}