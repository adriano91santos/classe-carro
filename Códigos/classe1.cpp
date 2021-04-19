#include <iostream>

using namespace std;

class propaganda{
    private:

    public:

    void inscrever(){

        cout << "Se inscreva no nosso canal!\n";
    }

    void curtir(){

        cout << "Curta o nosso canal\n";
    }
};

int main(){

    propaganda canal;

    canal.inscrever();
    canal.curtir();

    return 0;
}