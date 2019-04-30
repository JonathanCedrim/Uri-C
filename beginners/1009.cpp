#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::fixed;
using std::setprecision;

int main () {
    
    string name = "";
    float salarioFixo = 0;
    float totalVendidoNoMes = 0;
    
    cin >> name >> salarioFixo >> totalVendidoNoMes;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioFixo + ((15 * totalVendidoNoMes) / 100) << endl;
}