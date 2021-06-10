#include <iostream>
#include "funcoes.h"

using namespace std;

int main()
{
    g_static_var = 30;
    g_var = 3;

    funcao();
    funcao3();

    cout << "Valor de g_var " << g_var << "\n" << endl; 
    cout << "Valor de g_static_var " << g_static_var << "\n" << endl; 
}
