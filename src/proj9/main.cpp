#include <iostream>

using namespace std;

void f() { }
int f2(int a, int b) { return a + b; }
int * f3(char *a, bool b) { return new int; }

void f_copia(int n)
{
    n = 20;
}

void f_endereco(int *n) // endereco
{ 
    *n = 30;
}

void f_referencia(int &n) // referencia
{
    n = 18;
}

// malloc
int main()
{
    // alocar no heap com new 
    int *pi = new int;

    // alocar no heap com malloc
    int *p = (int*)malloc(sizeof(int));
    double *pd = (double*)malloc(sizeof(double));

    p[0] = 5;
    p[1] = 8;
    *(p + 2) = 10;
    
    char sep = ',';
    cout << p[0] << sep << p[1] << sep << p[2] << sep << p[3] << endl;

    // desalocar do heap com new
    delete pi;

    // desalocar do heap com malloc
    free(p);
    free(pd);

    // pegar o endereco da memoria de uma funcao
    auto ptrFun1 = &f; // correto (melhor para explicitar)
    auto ptrFun2 = f; // correto
    void (*ptrFun3)() = &f;
    int (*ptrFun4)(int, int) = &f2;
    int * (*ptrFun5)(char *, bool) = &f3;

    // referencia e ponto
    int n = 9; // variavel em memoria
    int *pn = &n; // ponteiro para n
    int &rn = n; // referencia para n (sinonimo)

    // teste
    cout << n << endl;
    cout << rn << endl;

    // passagem de parametro por referencia
    f_referencia(rn);
    
    // teste
    cout << n << endl;
    cout << rn << endl;

    // passagem de parametro por copia de valor
    f_copia(rn);

    // teste
    cout << n << endl;
    cout << rn << endl;

    // passagem de parametro por copia de valor
    f_endereco(pn);

    // teste
    cout << n << endl;
    cout << rn << endl;
}
