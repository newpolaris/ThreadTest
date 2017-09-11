#include <iostream>
#include <thread>

#include "SkColorPriv.h"
const auto k = SkAlphaMulQ();
#include "SkBlitter.h"

int main()
{
    std::thread t0([]() { SkAlphaMulQ(); });
    t0.join();
    if (k != 0xFF00FF || SkAlphaMulQ() == 0xFF00FF)
        std::cout << "FAIL" << std::endl;
    return 0;
}