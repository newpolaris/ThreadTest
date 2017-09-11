#include <stdint.h>
#include "SkBlitter.h"

static inline uint32_t SkAlphaMulQ() {
    static const uint32_t mask = gMask_00FF00FF;
    return mask;
}
