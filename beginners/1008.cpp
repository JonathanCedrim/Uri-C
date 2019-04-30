#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main () {
    int funcionariosTotal = 0;
    int horasTrabalhadasNoMes = 0;
    float salarioPorHora = 0;
    
    cin >> funcionariosTotal  >> horasTrabalhadasNoMes >> salarioPorHora;
    
    cout << "NUMBER = " << funcionariosTotal << endl;
    
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << horasTrabalhadasNoMes * salarioPorHora << endl;
}