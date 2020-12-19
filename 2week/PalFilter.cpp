#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool IsPalindrom(std::string &s) {
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


std::vector<std::string> PalindromFilter(std::vector<std::string> s, int minLength) {
    std::vector<std::string> result;
    for (auto a : s) {
        if (a.size() >= minLength && IsPalindrom(a)) {
            result.push_back(a);
        }
    }
    return result;
}

int main() 
{
    std::vector<std::string> src;
    std::vector<std::string> pal;
    int minLength;
    std::cin >> minLength;
 
    src.emplace_back("asdghjkjh");
    src.emplace_back("ffdddjhgyy");
    src.emplace_back("abcdeedcba");
    src.emplace_back("abcdefedcba");
 
    pal = PalindromFilter(src, minLength);
    for (auto it : pal) {
        std::cout << it << '\n';
    }
 
    std::cout << '\n';
    system("pause");
    return 0;
}