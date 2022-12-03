#include <stdio.h>
#include <math.h>
float p = 3.14159;
float area(float n)
{
    printf("%f", p * (pow(n, 2)));
}
int main()
{
    float n;
    scanf("%f", &n);
    area(n);
    return 0;
}