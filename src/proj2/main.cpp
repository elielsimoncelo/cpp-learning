#include <iostream>

using namespace std;

inline int retorna_10(); // assinatura da funcao

int main()
{
    int valor = retorna_10();
    
    cout << "Primeiro programa..." << "\nImprime: " << valor << endl;

    return 0;
}

inline int retorna_10() { return 10; }
