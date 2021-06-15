#include <iostream>

using namespace std;

// sobrecarga de funcoes / metodos

inline int soma(int a, int b)
{
    return a + b;
}

inline int soma(double a, double b)
{
    return a + b;
}

inline int soma(double a, double b, double c)
{
    return a + b;
}

int main()
{
    cout << "10 + 5 = " << soma(10, 5) << "\n";
    cout << "10 + 5.2 = " << soma(10.0, 5.2) << "\n";
    cout << "10 + 5.2 + 3 = " << soma(10.0, 5.2, 3.0) << "\n";
}
