#include <stdio.h>
int one_n(int n)
{
    if (n < 1)
        return;
    one_n(n - 1);
    printf("%d ", n);
}
int main()
{
    int n = 5;
    int s = one_n(n);
    return 0;
}