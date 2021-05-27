#include <iostream>

using namespace std;

int main()
{
    int n = 1;

    while (n)
    {
        cout << "Informe 2 números: " << endl;
        n = n + 1;
        
        if (n <= 10)
        {
            goto INICIO;
        }

        return 0; // Sucesso

    }

// cruzes, nunca use isto kkkk
INICIO:
}
