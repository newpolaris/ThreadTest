#include <iostream>
#include <stdint.h>

const uint32_t gMask_00FF00FF = 0xFF00FF;

uint32_t Executor()
{
    std::cout << gMask_00FF00FF << std::endl;
    return gMask_00FF00FF;
}
