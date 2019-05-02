#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

struct spheres {
    double formula;
    int radius;
};

int main() {
    spheres sphere[1];

    cin >> sphere[0].radius;
          
    sphere[0].formula = 4/3.0 * 3.14159 * pow(sphere[0].radius, 3);
    
    cout << fixed << setprecision(3); 
    cout << "VOLUME = " << sphere[0].formula << endl;
}