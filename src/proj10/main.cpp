#include <iostream>

using namespace std;

//int main() // este é o padrao da linguagem
int main(int argc, char *argv[]) // este é o padrao da linguagem
{
    cout << "Voce digitou " << argc << " parametros\n";

    for (int i = 0; i < argc; i++) 
    {
        cout << "O parametro [" << (i + 1) << "] = " << argv[i] << " \n";
    }
    
    int n = 0, x;

    if ((x = n + 3))
        x = 5;

    return 0;
}
