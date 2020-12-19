#include <iostream>
#include <string>
#include <map>
using namespace std;

struct FullName {
    string Name;
    string Soname;
};

class Person {
private:
    map<int, FullName> YearNameSoname;
public:
    void ChangeFirstName(int year, const string& first_name) {
        if (YearNameSoname.count(year) == 0) {
            YearNameSoname[year].Soname = "";
        }
        YearNameSoname[year].Name = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        if (YearNameSoname.count(year) == 0) {
            YearNameSoname[year].Soname = "";
        }
        YearNameSoname[year].Soname = last_name;
    }
    string GetFullName(int year) {
        for (const auto& i : YearNameSoname) {
                if (year < i.first) return "Incognito";
                break;
        }
        string n = "";
        string s = "";
        
        for (const auto& i : YearNameSoname) {
            if (i.first <= year && i.second.Soname != "") {
                s = i.second.Soname;
            }
            if (i.first <= year && i.second.Name != "") {
                n = i.second.Name;
            }
        }
        if (n == "") {
            return s + " with unknown first name";
        }
        else if (s == "") {
            return n + " with unknown last name";
        }
        else {
            return n + " " + s;
        }
    }
};