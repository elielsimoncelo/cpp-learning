#include <iostream>
// #include <string.h>

using namespace std;

//class (default members private)
//struct (default members public)

struct Data
{
    private:
        const unsigned short mAnoMinimo = 1, mAnoMaximo = 9999;
        unsigned char mDia, mMes;
        unsigned short mAno;
        bool mOk;

    public:
        // por definicao da linguagem este metodo e inline
        void imprime_data(const Data *data)
        {
            cout << (int) (*data).mDia << '/'
                << (int) data->mMes << '/'
                << (int) data->mAno << '\n';
        }

        void inicia_data(Data *data, char d, char m, short a)
        {
            data->mDia = d;
            data->mMes = m;
            data->mAno = a;
        }

        void altera_data(Data *data, char d, char m, short a)
        {
            data->mDia = d;
            data->mMes = m;
            data->mAno = a;
        }
        
        // por definicao da linguagem este metodo NÃO É inline
        void altera_data_2(Data *data, char d, char m, short a);

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

void Data::altera_data_2(Data *data, char d, char m, short a)
{
    data->mDia = d;
    data->mMes = m;
    data->mAno = a;
}

int main()
{
    Data d;// = Data(5, 5, 2025);
    
    // cout << (int) d.mDia << endl;
    d.imprime_data(&d);
    d.altera_data_2(&d, 1, 5, 2019);
    d.imprime_data(&d);

    return 0;
}
