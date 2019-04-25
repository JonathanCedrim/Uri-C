#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double n = 3.14159, R;

    cin >> R;
    cout << fixed << setprecision(4);
    cout << "A=" <<  n * (R * R) << endl;
}