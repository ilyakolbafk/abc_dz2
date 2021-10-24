#ifndef ABC_DZ1_TRIANGULAR_H
#define ABC_DZ1_TRIANGULAR_H

//------------------------------------------------------------------------------
// Triangularn.h - contains description of triangular matrix.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"
#include "Matrix.h"

//------------------------------------------------------------------------------
// Triangular matrix.
class Triangularn : public Matrix {
private:
    double *matrixArray; // Elements of matrix.
public:
    // Input parameters from file.
    virtual void In(FILE *file);

    // Random parameters.
    virtual void InRnd();

    // Output triangularn matrix.
    virtual void Out(FILE *file);

    // Get average of elements of triangularn matrix.
    virtual double Average();
};

#endif //ABC_DZ1_TRIANGULAR_H
