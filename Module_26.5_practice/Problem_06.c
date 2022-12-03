#include <stdio.h>
#include <string.h>
char ck(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] % 2 == 0)
        {
            s[i] += 32;
        }
    }
    printf("%s", s);
}
int main()
{
    int n;
    char str[101];
    str[101] = '\0';
    scanf("%s", str);
    ck(str);
    return 0;
}