#include <stdio.h>
int sort_a(int n, int *p)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    sort_a(n, &num);
    return 0;
}