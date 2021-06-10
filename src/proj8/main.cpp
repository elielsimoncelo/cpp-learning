#include <iostream>

using namespace std;

int main()
{
    int n;
    int* pn; // ponteiro para int -> (*) é o ponteiro - inderecao   , (&) e o endereco 

    n = 10;
    pn = &n;

    cout << "Endereco Memoria pn = " << &pn << endl; // endereco de pn  na memoria
    cout << "Endereco Memoria n = " << &n << endl; // endereco de n na memoria
    cout << "Endereco Memoria de n usando pn = " << pn << endl; // endereco de n atribuido ao ponteiro
    cout << "Imprimindo pn = " << *pn << endl; // imprimir o valor do endereco da memoria que foi atribuido ao ponteiro
    cout << "Imprimindo n = " << n << endl;
    cout << "---------------------------------------------------------------" << endl;

    *pn = 55; // duplo acesso a memoria

    cout << "Endereco Memoria pn = " << &pn << endl; // endereco de pn  na memoria
    cout << "Endereco Memoria n = " << &n << endl; // endereco de n na memoria
    cout << "Endereco Memoria de n usando pn = " << pn << endl; // endereco de n atribuido ao ponteiro
    cout << "Imprimindo pn = " << *pn << endl; // imprimir o valor do endereco da memoria que foi atribuido ao ponteiro
    cout << "Imprimindo n = " << n << endl;

    return 0;
}
