#include <iostream>

using namespace std;

int main()
{
    int n = 1;

// cruzes, nunca use isto kkkk
INICIO:
    cout << n << endl;
    n = n + 1;
    
    if (n <= 10)
    {
        goto INICIO;
    }

    return 0; // Sucesso
}
