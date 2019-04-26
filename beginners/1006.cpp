#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;



int main() {
    float A, B, C, MEDIA;

    int weigth[3] = {2, 3, 5};

    cin >> A >> B >> C;

    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / ( weigth[0] + weigth[1] + weigth[2]);

    cout << fixed << setprecision(1);
    cout <<"MEDIA = " << MEDIA << endl;
}

