//------------------------------------------------------------------------------
// Matrix.cpp - contains procedures for processing matrices (and input/output).
//------------------------------------------------------------------------------

#include <stdexcept>
#include "Matrix.h"
#include "Common.h"
#include "Diagonal.h"
#include "Triangularn.h"

//------------------------------------------------------------------------------
// Input parameters for matrix from file.
Matrix *Matrix::InStatic(FILE *file) {
    Matrix *mat;
    int k;
    fscanf(file, "%d", &k);
    switch (k) {
        case 1:
            mat = new Common;
            break;
        case 2:
            mat = new Diagonal;
            return mat;
        case 3:
            mat = new Triangularn;
            return mat;
        default:
            throw std::invalid_argument("Incorrect number of matrix.");
    }
    mat->In(file);
    return mat;
}

//------------------------------------------------------------------------------
// Random values for matrix.
Matrix *Matrix::InRndStatic() {
    Matrix *mat;
    int k = rand() % 3 + 1;
    switch (k) {
        case 1:
            mat = new Common;
            break;
        case 2:
            mat = new Diagonal;
            return mat;
        case 3:
            mat = new Triangularn;
            return mat;
        default:
            mat = nullptr;
    }
    mat->InRnd();
    return mat;
}