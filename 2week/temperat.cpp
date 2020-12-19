#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main () {
    int N = 0;
    int T = 0;
    vector<int> v;
    vector<int> v2;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> T;
        v.push_back(T);
    }
    int sr = accumulate(v.begin(), v.end(), int())/v.size();
    int h = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > sr) {
            ++h;
            v2.push_back(i);
        }
    }
    cout << h << endl;
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    return 0;
}