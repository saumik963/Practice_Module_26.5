#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, *p, *q;
    p = &a;
    q = &b;
    scanf("%f %f", p, q);

    printf("%.3f", (*p + *q) / 2);
    return 0;
}
