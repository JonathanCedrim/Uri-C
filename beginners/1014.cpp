#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int distance = 0;
    float fuelBurn = 0;


    cin >> distance >> fuelBurn;

    cout << fixed << setprecision(3);

    cout << distance / fuelBurn << " km/l" << endl;
}