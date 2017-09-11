#include <iostream>
#include <thread>
#include "SkBlitter.h"
// #include "SkColorPriv.h"
#undef NDEBUG
#include <cassert>

int main()
{
    // std::thread t0([]() { SkAlphaMulQ(); });
    std::thread t1([]() { Executor(); });
    // t0.join();
    t1.join();
    // assert( SkAlphaMulQ() == Executor() );
    return 0;
}