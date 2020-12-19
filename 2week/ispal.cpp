#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool IsPalindrom(string s) {
    std :: string s2;
    s2 = s;
    reverse(s2.begin(),s2.end());
    if (s2 == s) {
        return true;
    }
    else {
        return false;
    }
    
}


int main() 
{
    std :: string s;
    cin >> s;
    cout << IsPalindrom(s);
    return 0;
}