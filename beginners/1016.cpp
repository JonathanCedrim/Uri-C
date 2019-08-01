#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int distance = 0;
    cin >> distance;
    
    cout << fixed << setprecision(2);
    cout << distance * 2 << " minutos" << endl;
}