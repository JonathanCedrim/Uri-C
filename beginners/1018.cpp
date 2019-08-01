#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int requestCashValue = 0;
    int it = 0;
    int bankNote[7] = {100, 50, 20, 10, 5, 2, 1};
    int result[7];

    cin >> requestCashValue;
    cout << requestCashValue << endl;

    while(it < 7) {
        result[it] = requestCashValue / bankNote[it];
        requestCashValue =  requestCashValue - (bankNote[it] * result[it]);

	cout << result[it] << " nota(s) de R$ " << bankNote[it] << ",00" << endl;
	it++;
    }
}
