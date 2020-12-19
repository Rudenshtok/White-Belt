#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string& word) {
  map<char, int> i;
  for (char a : word) {
    ++i[a];
  }
  return i;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    string first_word, second_word;
    cin >> first_word >> second_word;
    if (BuildCharCounters(first_word) == BuildCharCounters(second_word)) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }

  return 0;
}