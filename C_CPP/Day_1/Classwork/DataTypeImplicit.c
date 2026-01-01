//Check implicit Datatype Operations.

#include <stdio.h>

int main()
{
    int i = 7;
    float f = 2.0;
    char c = 'B';   // ASCII = 66

    printf("i + f = %f\n", i + f);      // int → float
    printf("i / 2 = %d\n", i / 2);      // integer division
    printf("i / f = %f\n", i / f);      // int → float
    printf("c + i = %d\n", c + i);      // char → int

    printf("i > f = %d\n", i > f);      // relational
    printf("(i > 5) && (f < 5) = %d\n",
           (i > 5) && (f < 5));          // logical

    return 0;
}
