//------------------------------------------------------------------------------
// Container.cpp - Container handling functions.
//------------------------------------------------------------------------------

#include "Container.h"
#include "Matrix.h"
#include <stdio.h>

//------------------------------------------------------------------------------
// Initialization of Container.
Container::Container() {
    max_len = 30000;
    cont = new Matrix *[max_len];
    len = 0;
}

Container::~Container() {
    Clear();
    delete[] cont;
}

//------------------------------------------------------------------------------
// Clear data from Container.
void Container::Clear() {
    for (int i = 0; i < len; i++) {
        delete cont[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Input Container's data.
void Container::In(FILE *file) {
    while (!feof(file)) {
        if ((cont[len] = Matrix::InStatic(file)) != nullptr) {
            ++len;
        }
    }


}

// Random input to Container.
void Container::InRnd(int size) {
    while (len < size) {
        if ((cont[len] = Matrix::InRndStatic()) != nullptr) {
            ++len;
        }
    }
}

//------------------------------------------------------------------------------
// Output Container data.
void Container::Out(FILE *file) {
    fprintf(file, "%s%d%s", "Container contains ", len, " elements.");
    for (int i = 0; i < len; i++) {
        fprintf(file, "%s", "\n");
        cont[i]->Out(file);
    }
}

//------------------------------------------------------------------------------
// Shaker sort for container.
void Container::ShakerSort() {
    bool swapped = true;
    int start = 0;
    int end = len - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (cont[i]->Average() < cont[i + 1]->Average()) {
                Matrix *temp = cont[i];
                cont[i] = cont[i + 1];
                cont[i + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
        swapped = false;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (cont[i]->Average() < cont[i + 1]->Average()) {
                Matrix *temp = cont[i];
                cont[i] = cont[i + 1];
                cont[i + 1] = temp;
                swapped = true;
            }
        }
        ++start;
    }
}