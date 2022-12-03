#include <stdio.h>
#include <math.h>
int sum(int n, int arr[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 10 == 0)
        {
            s += arr[i];
        }
    }
    printf("%d", s);
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
    sum(n, arr);
    return 0;
}