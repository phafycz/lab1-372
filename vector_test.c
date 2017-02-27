#include <stdlib.h>
#include <stdio.h>
#include "types.h"
#define INT_MAX   2147483647
int smallest(const Vector3t* pts, int n);


int main(void)
{
     printf("Number of elements ===> ");
     unsigned int n;
     fscanf(stdin, "%d", &n);
     
     Vector3t points[n];
     for(int i = 0; i < n; i++)
     {
          printf("Assign elements (x,y,z)");
          int w,u,v;
          fscanf(stdin, "%d,%d,%d", &w,&u,&v);
          points[i].x = w;
          points[i].y = u;
          points[i].z = v;
     }
     
     int result = smallest(points, n);
     printf("The point closest to the origin is (<%d>, <%d>, <%d>)", points[result].x, points[result].y, points[result].z); ;
     free(points);
}
int smallest(const Vector3t* pts, int n)
{
     int smallNum = INT_MAX;
     int finalIndex = 0;     
     
     for(int i = 0; i < n; i++)
     {
          int compare = abs(pts[i].x) + abs(pts[i].y) + abs(pts[i].z);
          if(compare < smallNum)
          {
               smallNum = compare;
               finalIndex = i;
          }
     }
     return finalIndex;
}