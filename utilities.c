#include <stdlib.h>
#include <stdio.h>
#include "utilities.h"



float** malloc2D(size_t rows, size_t cols) 
{
 float* block = malloc(sizeof(float) * rows * cols);
 float** matrix = malloc(sizeof(float*) * rows);
 for (int row = 0; row < rows; ++row)
    {
    matrix[row] = block + cols * row;
    }
    return matrix;
}
void free2D(float*** matrix) 
{
 free((*matrix)[0]);
 free((*matrix));
 *matrix = NULL;
}
float*** malloc3D(size_t dim1, size_t dim2, size_t dim3)
{
   float* block = malloc(sizeof(float) * dim1 * dim2 * dim3);
   float** matrix = malloc(sizeof(float*) * dim1 * dim2);
   float*** last = malloc(sizeof(float**) * dim1);
   for (int row = 0; row < dim1; ++row)
   {
   matrix[dim1] = block + (dim1 * dim2 * dim3);
   }
   for(int cols = 0; cols < dim3; ++cols)
   {
     last[dim3] = &matrix[dim1 * dim2 * dim3]
   }
   return last;
}
void free3D(float*** matrix)
{
 free((*matrix)[0][0]);
 free((*matrix)[0]);
 *matrix = NULL:
}
void 2DPrint(float** matrix, size_t dim1, size_t dim2, size_t dim3)
{
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2 * dim3; j++)
        {
            printf("%0.2f,", matrix[i][j]);
        }
        printf("%s", ";");
    }
    printf("\n");
}