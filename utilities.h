//Paul Hafycz
//Lab 1 - CISC372
#include <stdlib.h>
#include <stdio.h>
#ifndef UTILITIES_H_
#define UTILITIES_H_

float** malloc2D(size_t rows, size_t cols);
void free2D(float*** matrix);
float*** malloc3D(size_t dim1, size_t dim2, size_t dim3);
void free3D(float**** matrix);
void print2D(float** matrix, size_t dim1, size_t dim2, size_t dim3);

#endif 