#include <iostream>
#include <chrono>
#include <thread>
#include <future>
#include <mutex>

using namespace std;
using namespace chrono;

mutex mtx; // exclusao mutua (nao permite que mais de um thread acessem um recurso ao mesmo tempo)

int thread_func(int num)
{
    for (int n = 0; n < 100; ++n)
    {
        // std::this_thread::sleep_for(10ms); // c++14
        this_thread::sleep_for(milliseconds(10));
        mtx.lock();
        cout << "thread " << num << ": " << n << endl;
        mtx.unlock();
    }

    return num;
}

int main()
{
    auto th1 = async(thread_func, 1); //launch:async - executa agora em uma nova thread
    auto th2 = async(thread_func, 2); //launch:deferred - executa agora em uma nova thread

    for (int n = 0; n < 100; ++n)
    {
        lock_guard<mutex> lg(mtx); // controle do lock e unlock (criado na pilha e destruido apos termino do escopo - destrutora)
        cout << "main: " << n << endl;
    }

    //th1.detach(); // terminar o thread
    //th2.detach(); // terminar o thread
    int retValueTh1 = th1.get();
    int retValueTh2 = th2.get();

    cout << "th1 retornou: " << retValueTh1 << endl;
    cout << "th2 retornou: " << retValueTh2 << endl;

    if (th1.valid())
        th1.wait(); // aguardar a thread terminar
    
    if (th2.valid())
        th2.wait(); // aguardar a thread terminar

    return 0;
}
