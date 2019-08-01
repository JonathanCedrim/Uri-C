#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

typedef struct {
    float x = 0;
    float y = 0;
} Position;

int main () {

    Position p1, p2;
    float distance = 0;
    
    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    cout  << fixed << setprecision(4);
    cout << distance << endl;
}