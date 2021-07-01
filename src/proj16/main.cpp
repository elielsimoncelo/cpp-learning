#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

void thread_func(int num)
{
    for (int n = 0; n < 100; ++n)
    {
        // std::this_thread::sleep_for(10ms); // c++14
        this_thread::sleep_for(milliseconds(10));
        cout << "thread " << num << ": " << n << endl;
    }
}

// main thread (thread principal)
int main()
{
    std::thread th1(thread_func, 1);
    std::thread th2(thread_func, 2);

    this_thread::sleep_for(milliseconds(200));

    for (int n = 0; n < 100; ++n)
    {
        cout << "main: " << n << endl;
    }

    th1.detach(); // terminar o thread
    th2.detach(); // terminar o thread

    // th1.join(); // aguardar a thread terminar
    // th2.join(); // aguardar a thread terminar

    return 0;
}
