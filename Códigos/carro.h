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