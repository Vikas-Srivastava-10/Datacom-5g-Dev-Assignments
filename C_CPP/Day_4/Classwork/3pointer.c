// Write a C++ program to declare 3 pointer variables of three different data types and initialize them with their respective variable address. Try copying one type of pointer to another without typecasting.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';

    int* p1 = &a;
    float* p2 = &b;
    char* p3 = &c;

    // Copying pointer of one type to another
    p1 = p2;   // ⚠️ Allowed (with warning)
    p2 = p3;   // ⚠️ Allowed (with warning)

    printf("%d\n", *p1);
    printf("%f\n", *p2);
    printf("%c\n", *p3);

    return 0;
}
