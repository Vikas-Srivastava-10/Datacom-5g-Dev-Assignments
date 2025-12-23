#include <stdio.h>

int main()
{
    int num = 10, pos = 2;
    int res = num & (1 << pos);

    printf("%d pos in number %d is %s\n",
           pos, num, res ? "ON" : "OFF");

    return 0;
}
