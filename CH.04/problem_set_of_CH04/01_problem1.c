#include <stdio.h>

int main()
{
    int n, t, i;
    printf("the the number you want table of :-");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        t = n * i;
        printf("%d * %d is %d\n", n, i, t);
    }

    return 0;
}