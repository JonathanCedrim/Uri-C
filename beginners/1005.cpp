#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main () {
    float A, B, MEDIA;

    cin >> A >> B;

    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    

    cout << setprecision(5);

    cout << "MEDIA = " << MEDIA;
}