#include <iostream>
#include <functional>

using namespace std;

int funcao()
{
    return 20;
}

auto funcao2() -> int
{
    return 30;
}

// Lambdas

int main()
{
    int x = 3;

    function<int()> fun = &funcao;

    // nao pode
    // void imprime(int valor)
    // {
    //     cout << valor << endl;
    // }

    // pode
    //auto imprime = [] (int valor) -> void # igual quando usa uma function
    //function<void(int)> imprime = [] (int valor) -> void # nao captura nada
    //function<void(int)> imprime = [x] (int valor) -> void # capturar a variavel x por valor
    //function<void(int)> imprime = [&x] (int valor) -> void # capturar a variavel x por referencia
    //function<void(int)> imprime = [=] (int valor) -> void # capturar todas as variaveis locais por valor
    //function<void(int)> imprime = [&] (int valor) -> void # capturar todas as variaveis locais por referencia
    //auto imprime = [] (auto valor) -> auto # tipagem dinamica (estranho demais) | generico
    function<void(int)> imprime = [] (int valor) -> void    
    {
        cout << valor << endl;
    };

    imprime(10);
    cout << fun() << endl;
    
    return 0;
}
