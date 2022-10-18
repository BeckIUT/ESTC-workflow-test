#include <stdio.h>
#include "../lib/vector.h"

int main()
{
    struct Vector3D a,b,c;
    printf("Please input vector elements one by one with a space between, (x,y,z) format each being an integer value\n");
    printf("First vector:\n");
    scanf("%d %d %d", &a.x, &a.y, &a.z);
    // scanf("%d", &a.x);
    // scanf("%d", &a.y);
    // scanf("%d", &a.z);
    printf("Second vector:\n");
    scanf("%d %d %d", &b.x, &b.y, &b.z);
    // scanf("%d", &b.x);
    // scanf("%d", &b.y);
    // scanf("%d", &b.z);

    printf("\n<<< Addition of vectors >>>\n");
    vector3D_sum(&a, &b, &c);
    printVector3D(&a);
    printf("+");
    printVector3D(&b);
    printf("=");
    printVector3D(&c);

    printf("\n<<< Substraction of vectors >>>\n");
    vector3D_sub(&a, &b, &c);
    printVector3D(&a);
    printf("-");
    printVector3D(&b);
    printf("=");
    printVector3D(&c);

    printf("\n<<< Dot Product of vectors >>>\n");
    printVector3D(&a);
    printf("*");
    printVector3D(&b);
    printf("=");
    printf("%d\n", vector3D_dotproduct(&a, &b));

    printf("<<< Cross Product of vectors >>>\n");
    vector3D_crossproduct(&a, &b, &c);
    printVector3D(&a);
    printf("x");
    printVector3D(&b);
    printf("=");
    printVector3D(&c);
    printf("\n");
    
    return 0;
}
