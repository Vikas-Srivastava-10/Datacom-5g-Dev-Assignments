#include <stdio.h>

int main()
{
    unsigned char num;
    int pos;
    unsigned char result;

    printf("Enter number: ");
    scanf("%hhu", &num);

    printf("Enter rotate positions: ");
    scanf("%d", &pos);

    result = (num >> pos) | (num << (8 - pos));

    printf("After right rotate: %u\n", result);

    return 0;
}
