#ifndef TASK1_CONTAINER_H
#define TASK1_CONTAINER_H

//------------------------------------------------------------------------------
// Container.h - contains data type that represents simple Container.
//------------------------------------------------------------------------------

#include "Matrix.h"

//------------------------------------------------------------------------------
// Container based on 1-dimension array.
class Container {
private:
    int max_len = 30000; // Max length.
    Matrix **cont;
public:
    int len; // Current length.

    // Initialization.
    explicit Container();

    // Deleting Container's data.
    void Clear();

    // Input data.
    void In(FILE *file);

    // Random input.
    void InRnd(int size);

    // Output Container's data.
    void Out(FILE *file);

    // Shaker sort for container.
    void ShakerSort();

    // Destructor.
    ~Container();
};

#endif //TASK1_CONTAINER_H