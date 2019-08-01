#include <iostream>
#include <iomanip>

using namespace std;


int maiorABC(int A, int B, int C) {
    if (A > B) {
        if ( A > C) {
            return A;
        }
        return C;
    } else if( B > C) {
        return B;
    }
    return C;
}

int main() {
    int A, B, C;

    cin >> A >> B >> C;
    cout << maiorABC(A, B, C) << " eh o maior" << endl;
}