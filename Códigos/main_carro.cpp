#include <iostream>
#include "carro.h"

using namespace std;

int main(){
    
    carro palio(1995, 10000, 110000);
    cout << "Palio:\n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Km: " << palio.getkm() << endl;

    cout << "\n";

    carro corsa(1998, 9700, 187000);
    cout << "Corsa:\n";
    cout << "Ano: " << corsa.getano() << endl;
    cout << "Valor: " << corsa.getvalor() << endl;
    cout << "Km: " << corsa.getkm() << endl;

    system("pause");

    return 0;
}