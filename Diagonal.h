#ifndef ABC_DZ1_DIAGONAL_H
#define ABC_DZ1_DIAGONAL_H

//------------------------------------------------------------------------------
// Diagonal.h - contains description of diagonal matrix.
//-----------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"
#include "Matrix.h"

//------------------------------------------------------------------------------
// Diagonal matrix.
class Diagonal : public Matrix {
private:
    double *matrixArray; // Elements of matrix.
public:
    // Input parameters from file.
    virtual void In(FILE *file);

    // Random parameters.
    virtual void InRnd();

    // Output common matrix parameters.
    virtual void Out(FILE *file);

    // Get average of elements of matrix.
    virtual double Average();
};

#endif //ABC_DZ1_DIAGONAL_H
