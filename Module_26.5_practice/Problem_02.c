#include <stdio.h>
int sort_a(int n, int num[])
{
    int a;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                a = num[j];
                num[j] = num[j + 1];
                num[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
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
    sort_a(n, num);
    return 0;
}