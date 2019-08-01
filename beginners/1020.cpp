#include <iostream>

using namespace::std;

int main () {
    int days = 0;
    cin >> days;
    
    cout << days / 365 << " ano(s)" << endl;
    cout << days % 365 / 30 << " mes(es)" << endl; 
    cout << days % 365 % 30 << " dia(s)" << endl;
}