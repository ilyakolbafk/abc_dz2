//------------------------------------------------------------------------------
// Triangularn.cpp - implementation of tetrahedron.h.
//------------------------------------------------------------------------------

#include "Triangularn.h"
#include "Rand.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void Triangularn::In(FILE *file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    this->matrixArray = new double[dimension * (dimension + 1) / 2];
    for (int i = 0; i < dimension * (dimension + 1) / 2; ++i) {
        fscanf(file, "%lf", &matrixArray[i]);
    }
    this->dimension = dimension;
}

// Random parameters.
void Triangularn::InRnd() {
    this->dimension = Random();
    this->matrixArray = new double[dimension * (dimension + 1) / 2];
    for (int i = 0; i < dimension * (dimension + 1) / 2; ++i) {
        matrixArray[i] = Random(0);
    }
}

//------------------------------------------------------------------------------
// Output triangularn matrix.
void Triangularn::Out(FILE *file) {
    fprintf(file, "%s%d%s%.2f", "It is Triangular matrix: dimension = ", dimension, ". Average = ",
            Average());
}

//------------------------------------------------------------------------------
// Get average of elements of triangularn matrix.
double Triangularn::Average() {
    double average = 0;
    for (int i = 0; i < dimension * (dimension + 1) / 2; ++i) {
        average += matrixArray[i];
    }
    return average / (dimension * dimension);
}
