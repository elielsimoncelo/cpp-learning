#include <iostream>

using namespace std;

constexpr unsigned long long fatorial_recursiva(unsigned int numero)
{
    return (numero > 1) ? numero * fatorial_recursiva(numero - 1) : 1;
}

// constexpr
// - o compilador ja calcula quando os parametros sao constantes
// - em caso negativo ele executa a funcao no runtime
// constexpr unsigned long long fatorial_recursiva(unsigned int numero)
// {
//     return (numero > 1) ? numero * fatorial_recursiva(numero - 1) : 1;
// }

const unsigned long long fatoria_de_5 = fatorial_recursiva(5); // calculado em tempo de compilacao

int main()
{
    cout << "Fatorial de 5 (constexpr) = " << fatoria_de_5 << "\n";
    cout << "Fatorial de 5 = " << fatorial_recursiva(5) << "\n";
}
