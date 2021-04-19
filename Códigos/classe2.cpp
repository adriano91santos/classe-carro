#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    // Construtor:

    carro(int a, float v, float k){
        ano = a;
        valor = v;
        km = k;
    }

    // get (obter) e set (setar, apontar, indicar)
    
    void setano(int a){
        ano = a;
    }

    int getano(){
        return ano;
    }

    void setvalor(float v){
        valor = v;
    }

    float getvalor(){
        return valor;
    }

    void setkm(float k){
        km = k;
    }

    float getkm(){
        return km;
    }

};

int main(){
    
    cout << "Palio:\n";
    carro palio(1995, 10000, 110000);
    //carro palio;
    //palio.setano(1995);
    //palio.setvalor(10000);
    //palio.setkm(110000);

    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Km: " << palio.getkm() << endl;

    cout << endl;

    cout << "Celta:\n";
    carro celta(2000, 12000, 95000);
    //carro celta;
    //celta.setano(2000);
    //celta.setvalor(12000);
    //celta.setkm(95000);

    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Km: " << celta.getkm() << endl;

    return 0;
}