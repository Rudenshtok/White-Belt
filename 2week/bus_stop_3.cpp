#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
int main() {
    set<string> bus_stops;
    map<set<string>, int> m;
    int Q, count_stop, number_m = 0;
    string stop;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        cin >> count_stop;
        for (count_stop; count_stop > 0; --count_stop) {
            cin >> stop;
            bus_stops.insert(stop);
        }
        if (!m.count(bus_stops)) {
            m[bus_stops] = ++number_m;
            cout << "New bus " << number_m << "\n";
        }
        else {
            cout << "Already exists for " << m[bus_stops] << "\n";
        }
        bus_stops.clear();
    }
    return 0;
}