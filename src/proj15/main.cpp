#include <iostream>
// #include <string.h>
using namespace std;

//class (default members private)
//struct (default members public)

struct Data
{
    private:
        // inicializacao in-class
        const unsigned short mAnoMinimo = 1, mAnoMaximo = 9999;
        unsigned char mDia, mMes;
        unsigned short mAno;
        bool mOk;

    public:
        // por definicao da linguagem este metodo e inline
        // void imprime_data(const Data *data) # clang
        void imprime_data()
        {
            cout << (int) this->mDia << '/'
                << (int) this->mMes << '/'
                << (int) this->mAno << '\n';
        }

        // void inicia_data(Data *data, char d, char m, short a) # clang
        void inicia_data(char d, char m, short a)
        {
            // data->mDia = d; # clang
            this->mDia = d; 
            this->mMes = m;
            this->mAno = a;
        }

        void altera_data(char d, char m, short a)
        {
            this->mDia = d;
            this->mMes = m;
            this->mAno = a;
        }
        
        // por definicao da linguagem este metodo NÃO É inline
        void altera_data_2(char d, char m, short a);
        
        // const nao deixa alterar os membros usando o this
        inline void imprime_data_2() const;

        // Data() = default; // c++11
        Data()
        {
            mDia = 1;
            mMes = 1;
            mAno = 1900;
        }

        Data(short dia, short mes, short ano)
        {
            mDia = dia;
            mMes = mes;
            mAno = ano;
        };
};

inline void Data::imprime_data_2() const // # nao deixa alterar os membros usando o this
{
    cout << (int) this->mDia << '/'
        << (int) this->mMes << '/'
        << (int) this->mAno << '\n';
}

void Data::altera_data_2(char d, char m, short a)
{
    this->mDia = d;
    this->mMes = m;
    mAno = a; // sem o this tbem funciona
}

int main()
{
    Data dt, dt1(5, 5, 2025); // new Data(5, 5, 2025);
    
    cout << "Dt" << endl;
    dt.imprime_data();
    dt.altera_data_2(1, 5, 2019);
    dt.imprime_data();

    cout << "Dt1" << endl;
    dt1.imprime_data_2();

    return 0;
}
