#include <iostream>

using namespace std;

int Factorial (int a) {
    if (a <= 1) {
       return 1;
    }
    else {
        return a * Factorial(a - 1);
    }
}


int main() 
{
    int a;
    cin >> a;
    cout << Factorial(a);
    return 0;
}