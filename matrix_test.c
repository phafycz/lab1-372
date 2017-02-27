#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utilities.h"

int main()
{
    printf("Dimensionality of 3-D matrix ===> ");
    unsigned int dim1,dim2,dim3;
    fscanf(stdin, "%d /n %d /n %d" , &dim1,&dim2,&dim3);
    float*** matrix3d = malloc3D(dim1, dim2, dim3);
    float** matrix2d = malloc2D(dim1, dim2*dim3);
    float* matrix1d = malloc(sizeof(float) * dim1 * dim2 * dim3);
    int size = dim1 * dim2 * dim3;
    
    for(int i = 0; i < size; i++)
    {
        fscanf(stdin, "%f", &matrix1d[i]);
    }
    for(int j = 0; j < dim1; j++)
    {
        matrix2d[j] = &matrix1d[j * dim2 * dim3];
    }
    print2D(matrix2d, dim1, dim2, dim3);   
   memcpy(&matrix3d, &matrix2d, size * sizeof(int));
   
   for (int a = 0; a < dim1; a++)
    {
        for (int b = 0; b < dim2; b++)
        {
            for (int c = 0; c < dim3; c++)
            {   
                printf("%f", matrix3d[a][b][c]);
            }
        }
    }
    free2D(&matrix2d);
    free3D(&matrix3d);
}