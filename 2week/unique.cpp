#include <iostream>
#include <string>
#include <set>

using namespace std;

int main () {
    int N;
    string a;
    cin >> N;
    set<string> s;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        s.insert(a);
    }
    cout << s.size();
    return 0;
}