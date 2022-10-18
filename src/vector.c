#include <stdio.h>
#include "../lib/vector.h"

void vector3D_sum(struct Vector3D *first, struct Vector3D *second, struct Vector3D *result)
{
    result->x = first->x + second->x;
    result->y = first->y + second->y;
    result->z = first->z + second->z;
}

void vector3D_sub(struct Vector3D* first, struct Vector3D* second, struct Vector3D* result)
{
    result->x = first->x - second->x;
    result->y = first->y - second->y;
    result->z = first->z - second->z;
}

int vector3D_dotproduct(struct Vector3D* first, struct Vector3D* second)
{
    int result = (first->x*second->x) + (first->y*second->y) + (first->z*second->z);
    return result;  
}

void vector3D_crossproduct(struct Vector3D* first, struct Vector3D* second, struct Vector3D* result)
{
    result->x = (first->y*second->z) + (first->z*second->y);
    result->y = (first->x*second->z) + (first->z*second->x);
    result->z = (first->y*second->x) + (first->x*second->y);
}

void printVector3D(struct Vector3D *vec)
{
    printf("(%d, %d, %d)", vec->x, vec->y, vec->z);
}