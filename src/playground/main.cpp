#include <iostream>
#include <span>

using namespace std;

template<typename... ARGS> double soma(const ARGS... args)
{
    return 10; // static_cast<double>((args + ...));
}

inline int retorna_10(); // assinatura da funcao

int main()
{
    int n, m;
    cout << "Digite dois números: ";
    cin >> n >> m; 
    cout << "A soma dos numeros digitados e " << n + m << "\n";

    int a = 10;

    if ("abcd" - "abcd")
    {
        cout << "Blah blah\n";
    }

    double somado = soma(1, 10, 20, 30);
    int valor = retorna_10();
    cout << "Primeiro programa..." << "\nImprime: " << valor << "\nImprime a soma: " << somado << endl; // << endl;
    cout << "Imprimindo outro valor...\n";

    return 0;
}

inline int retorna_10() { return 10; }