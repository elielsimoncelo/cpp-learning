#include <iostream>

using namespace std;

int main()
{
    int n = 1;

    while (n)
    {
        int n, m;
        cout << "# Digite Q para sair ..." << endl;
        cout << "- Informe 02 numeros: ";
        cin >> n >> m;
        
        if (cin.fail())
        {
            break;
        }

        cout << "- A soma de " << n << " + " << m << " = " << n + m << "\n" << endl;
    }

    return 0;
}
