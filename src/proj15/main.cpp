#include <iostream>

using namespace std;

struct Date
{
    char mDia, mMes;
    short mAno;

    Date(char dia, char mes, short ano)
    {
        mDia = dia;
        mMes = mes;
        mAno = ano;
    };
};

int main()
{
    Date d = Date('5', '5', 2025);
    cout << d.mAno << endl;

    return 0;
}
