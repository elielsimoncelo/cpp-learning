#include <iostream>
#include <future>
#include <thread>
#include <functional>

using namespace std;
using namespace chrono;

int func()
{
    std::this_thread::sleep_for(seconds(5));
    return 10;
}

int main()
{
    packaged_task<int()> task(func);
    auto f = task.get_future();
    auto th1 = async(move(task));
    cout << "Parte 1" << endl;

    cout << f.get() << endl;

    if (th1.valid())
        th1.wait();

    return 0;
}
