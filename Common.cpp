//------------------------------------------------------------------------------
// Common.cpp - implementation of Common.h.
//------------------------------------------------------------------------------

#include "Common.h"
#include "Rand.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void Common::In(FILE *file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    this->matrixArray = new double *[dimension];
    for (int i = 0; i < dimension; ++i) {
        matrixArray[i] = new double[dimension];
        for (int j = 0; j < dimension; ++j) {
            fscanf(file, "%lf", &matrixArray[i][j]);
        }
    }
    this->dimension = dimension;

}

// Random parameters.
void Common::InRnd() {
    dimension = Random();
    matrixArray = new double *[dimension];
    for (int i = 0; i < dimension; ++i) {
        matrixArray[i] = new double[dimension];
        for (int j = 0; j < dimension; ++j) {
            matrixArray[i][j] = Random(0);
        }
    }
}

//------------------------------------------------------------------------------
// Output common matrix parameters and square.
void Common::Out(FILE *file) {
    fprintf(file, "%s%d%s%.2f", "It is Common matrix: dimension = ", dimension, ". Average = ",
            Average());
}

//------------------------------------------------------------------------------
// Get average of elements of common matrix.
double Common::Average() {
    double average = 0;
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            average += matrixArray[i][j];
        }
    }
    return average / (dimension * dimension);
}
