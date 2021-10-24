#ifndef ABC_DZ1_COMMON_H
#define ABC_DZ1_COMMON_H

//------------------------------------------------------------------------------
// Common.h - contains description of common matrix.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "Matrix.h"
#include "Rand.h"


//------------------------------------------------------------------------------
// Common matrix.
class Common : public Matrix {
private:
    double **matrixArray; // Elements of matrix.
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


#endif //ABC_DZ1_COMMON_H
