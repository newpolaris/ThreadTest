#include "SkBlitter.h"
#include "SkColorPriv.h"

uint32_t SkAlphaMulQ() {
    uint32_t mask = gMask_00FF00FF;
    return mask;
}
