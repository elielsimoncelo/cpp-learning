#include <iostream>
#include <future>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;
using namespace chrono;

// std::future<> / std::promise
// comunicar dois threads

void calc(std::promise<int> &p)
{
    int result = 0;

    for (int n = 0; n < 100; ++n)
    {
        result += n;
    }

    p.set_value(result);
    std::this_thread::sleep_for(milliseconds(100));
}

int main()
{
    std::promise<int> p;
    std::future<int> f = p.get_future();
    std::thread th1(calc, std::ref(p)); // std::ref => passar o promise como referencia e nao uma copia
    //std::thread th1(calc, p); // nao funciona => nao deve passar a copia e sim uma referencia
    th1.detach();

    cout << f.get() << endl;

    return 0;
}
