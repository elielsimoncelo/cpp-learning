#include <iostream>

using namespace std;

// int soma(int a, int b) { return a + b; } # 
inline int soma(int a, int b) // inline = dica para o compilador otimizar o codigo
{ 
    return a + b; 
}

int main()
{
    int a = 10, b = 5;

    cout << "a + b = " << soma(a, b) << "\n";

    return 0;
}
