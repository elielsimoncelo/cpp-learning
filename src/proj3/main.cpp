#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Digite dois números: ";
    cin >> n >> m; 

    if (cin.fail())
    {
        cout << "Error! Digite somente numeros.\n";    
        return 1; // Error
    }

    cout << "A soma dos numeros digitados e " << n + m << "\n";

    return 0; // Sucesso
}
