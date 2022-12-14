#include <stdio.h>
int sum(int i, int n, int arr[])
{
    if (i == n)
        return 0;
    int s = sum(i + 1, n, arr);
    return s + (arr[i] % 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sum(0, n, arr));
    return 0;
}