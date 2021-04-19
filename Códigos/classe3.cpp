#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    carro(int a, float v, float k);

    void setano(int a);
    int getano();

    void setvalor(float a);
    float getvalor();

    void setkm(float k);
    float getkm();
};

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

    return 0;
        
    }

    carro::carro(int a, float v, float k){
        ano = a;
        valor = v;
        km = k;
}

    void carro::setano(int a){
        ano = a;
    }

    int carro::getano(){
        return ano;
    }

    void carro::setvalor(float v){
        valor = v;
    }

    float carro::getvalor(){
        return valor;
    }

    void carro::setkm(float k){
        km = k;
    }

    float carro::getkm(){
        return km;
    }