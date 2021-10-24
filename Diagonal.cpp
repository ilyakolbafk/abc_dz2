//------------------------------------------------------------------------------
// Diagonal.cpp - implementation of Diagonal.h.
//------------------------------------------------------------------------------

#include <stdexcept>
#include "Diagonal.h"
#include "Rand.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void Diagonal::In(FILE *file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    this->matrixArray = new double[dimension];
    for (int i = 0; i < dimension; ++i) {
        fscanf(file, "%lf", &matrixArray[i]);
    }
    this->dimension = dimension;
}

// Random parameters.
void Diagonal::InRnd() {
    this->dimension = Random();
    this->matrixArray = new double[dimension];
    for (int i = 0; i < dimension; ++i) {
        matrixArray[i] = Random(0);
    }
}

//------------------------------------------------------------------------------
// Output diagonal matrix parameters.
void Diagonal::Out(FILE *file) {
    fprintf(file, "%s%d%s%.2f", "It is Diagonal matrix: dimension = ", dimension, ". Average = ",
            Average());
}

//------------------------------------------------------------------------------
// Get average of elements of diagonal matrix.
double Diagonal::Average() {
    double average = 0;
    for (int i = 0; i < dimension; ++i) {
        average += matrixArray[i];
    }
    return average / (dimension * dimension);
}
