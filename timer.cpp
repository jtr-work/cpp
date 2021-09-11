
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> secondTIme = end - start;
    std::cout<<secondTIme.count()<<" s\n";
    return 0;
}