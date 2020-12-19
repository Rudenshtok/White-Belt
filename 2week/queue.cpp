#include <iostream>
#include <vector>
#include <string>
using namespace std;

void WORRY (int& i, vector<bool>& queue) {
    queue[i] = true;
}

void QUIET (int& i, vector<bool>& queue) {
    queue[i] = false;    
}

void COME (int n, vector<bool>& queue) {
    int a;
    a = queue.size();
    queue.resize(a + (n));
}

void WORRY_COUNT (const vector<bool> queue) {
    int count = 0;
    for (auto i : queue) {
        if (i == 1) {
            ++count;
        }
    }
    cout << count << "\n";
}

int main () {
    int Q;
    cin >> Q;
    vector<bool> queue;
    for (int i = 0; i < Q; ++i) {
        string s;
        int b;
        cin >> s;
        if (s == "WORRY_COUNT") {
            WORRY_COUNT(queue);
        }
        else {
            cin >> b;
            if (s == "WORRY") {
                WORRY(b, queue);
            }
            if (s == "QUIET") {
                QUIET(b, queue);
            }
            if (s == "COME") {
                COME(b, queue);
            }
        }
    }
    
    return 0;
}