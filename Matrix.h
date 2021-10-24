#ifndef ABC_DZ1_MATRIX_H
#define ABC_DZ1_MATRIX_H

//------------------------------------------------------------------------------
// Matrix.h - contains definition of matrix.
//------------------------------------------------------------------------------
#include <stdexcept>

//------------------------------------------------------------------------------
// Structure summarizing all matrices.
class Matrix {
protected:
    int dimension; // Dimension.
public:
    // Input figure.
    static Matrix *InStatic(FILE *file);

    // Random input.
    static Matrix *InRndStatic();

    // Virtual input figure.
    virtual void In(FILE *file) = 0;

    // Virtual random input.
    virtual void InRnd() = 0;

    // Output figure.
    virtual void Out(FILE *file) = 0;

    // Get average of elements of figure.
    virtual double Average() = 0;
};

#endif //ABC_DZ1_MATRIX_H