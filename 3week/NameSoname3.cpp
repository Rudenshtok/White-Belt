#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

struct FullName {
    string Name;
    string Soname;
};

class Person {
private:
    map<int, FullName> YearNameSoname;
    int birth_year = 0;
public:
    Person (const string& first_name, const string& last_name, int year) {
        YearNameSoname[year] = { first_name, last_name };
        birth_year = year;
        for (auto& i : YearNameSoname) {
            if (i.first < year) YearNameSoname.erase(i.first);
        }
    }
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
    string GetFullName(int year) const {
        if (birth_year != 0 && year < birth_year) { 
            return "No person";
        }
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
    string GetFullNameWithHistory(int year) const {
        if (birth_year != 0 && year < birth_year) { 
            return "No person";
        }
        for (const auto& i : YearNameSoname) {
                if (year < i.first) {
                    return "Incognito";
                }
                break;
        }
            string n;
            string s;
            vector<string> secondnames;
            vector<string> firstnames;
            for (const auto& i : YearNameSoname) {
                if (i.first <= year && i.second.Soname != "") {
                    if (i.second.Soname != s && s != "") {
                        secondnames.push_back(s);
                    }
                    s = i.second.Soname;
                }
                if (i.first <= year && i.second.Name != "") {
                    if (i.second.Name != n && n != "") {
                        firstnames.push_back(n);
                    }
                    n = i.second.Name;
                }
            }
            string secnames_string = "", firstnames_string = "";
            if (secondnames.size() > 0) {
                secnames_string += " (" + secondnames[secondnames.size() - 1];
                if (secondnames.size() > 1) {
                    for (int i = secondnames.size() - 1; i > 0; --i) {
                        secnames_string += ", " + secondnames[i - 1]; 
                    }
                }
            secnames_string += ")"; 
            }
            if (firstnames.size() > 0) {
                firstnames_string += " (" + firstnames[firstnames.size() - 1];
                if (firstnames.size() > 1) {
                    for (int i = firstnames.size() - 1; i > 0; --i) {
                        firstnames_string += ", " + firstnames[i - 1];
                    }
                }
            firstnames_string += ")";
            }
        if (n == "") return s + secnames_string + " with unknown first name";
        else if (s == "") return n + firstnames_string + " with unknown last name";
        else return n + firstnames_string + " " + s + secnames_string;
    }
    
};