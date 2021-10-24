//------------------------------------------------------------------------------
// Rand.cpp - Random functions.
//------------------------------------------------------------------------------

#include <stdlib.h>
#include "Rand.h"

// Random integer from 1 to 20.
int Random() {
    return rand() % 20 + 1;
}

// Random double from -100 to 100.
double Random(double i) {
    return (Random() * (rand() % 10001 - 5000) / 1000.0);
}
