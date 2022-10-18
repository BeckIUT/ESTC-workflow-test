#ifndef _VECTOR_H_
#define _VECTOR_H_

struct Vector3D{
    int x,y,z;
};

/***
 * Function receives two vector by reference and returns result by assigning to the third element. Function calculates sum of two input vectors.
 * @param : Three Vector3D objects
 * @return : void
*/
void vector3D_sum(struct Vector3D* first, struct Vector3D* second, struct Vector3D* result);
/***
 * Function receives two vector by reference and returns result by assigning to the third element. Function calculates subtraction of two input vectors.
 * @param : Three Vector3D objects
 * @return : void
*/
void vector3D_sub(struct Vector3D* first, struct Vector3D* second, struct Vector3D* result);
/***
 * Function receives two vector by reference and returns result as an integer value. Function calculates dot product of two input vectors.
 * @param : Two Vector3D objects
 * @return : int
*/
int vector3D_dotproduct(struct Vector3D* first, struct Vector3D* second);
/***
 * Function receives two vector by reference and returns result by assigning to the third element. Function calculates cross product of two input vectors.
 * @param : Three Vector3D objects
 * @return : void
*/
void vector3D_crossproduct(struct Vector3D* first, struct Vector3D* second, struct Vector3D* result);
/***
 * Prints Vector struct as nice formatted way
 * @param : A Vector3D variable reference
 * @return : void
*/
void printVector3D(struct Vector3D *vec);
#endif