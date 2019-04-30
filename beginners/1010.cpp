#include <iostream>
#include <iomanip>
#include <string>

using std::fixed;
using std::setprecision;
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct products {
    int productCode = 0;
    int unit = 0;
    float price = 0; 
};

int main () {    
    products product[1];

    cin >> product[0].productCode >> product[0].unit >> product[0].price;
    cin >> product[1].productCode >> product[1].unit >> product[1].price;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (product[0].unit * product[0].price) + (product[1].unit * product[1].price)  << endl;
}