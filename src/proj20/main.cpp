#include <iostream>

using namespace std;

// economia de memoria, quando você precisa somente de um valor por vez (sobreposicao)
// cuidado
union Teste
{
    char ch;
    int n;
    double dbl;
};

struct alignas (16) Teste1
{
    char ch;
    int n;
    double dbl;
};
int main()
{
    Teste t;
    Teste1 t1;

    t.ch = 'A';
    t.n = 10;
    t.dbl = 2.5;

    t1.ch = 'A';
    t1.n = 10;
    t1.dbl = 2.5;

    cout << sizeof(t) << endl;
    cout << sizeof(t1) << endl;

    return 0;
};
