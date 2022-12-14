#include <stdio.h>
int po(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * po(a, b - 1);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", po(a, b));
    return 0;
}
