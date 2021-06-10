#include <iostream>

using namespace std;

int g_var = 10;
static int g_static_var = 20;

static void funcao2()
{
    cout << "Chamou funcao2()\n" << endl;
}

void funcao()
{
    cout << "Chamou funcao(). g_var = " << g_var << "\n" << endl;
}

void funcao3()
{
    cout << "Chamou funcao3()\n" << endl;
}
