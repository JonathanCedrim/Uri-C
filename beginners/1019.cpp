#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int seconds;
    cin >> seconds;
    cout << seconds / 60 / 60 << ":" << seconds / 60 % 60  << ":" << seconds % 60 % 60 << endl;
}