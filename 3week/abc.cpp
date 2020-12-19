#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main () {
    int N, num;
    vector<int> v;
    cin >> N;
    for (N; N > 0; --N) {
        cin >> num;
        v.push_back(num);
    }
    sort (begin(v), end(v), [](const int& x, const int& y) {
        return abs(x) < abs(y);
    });
    for (const auto& i : v) { 
        cout << i << " ";
    }
    return 0;
}