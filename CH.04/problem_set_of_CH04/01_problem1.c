#include <stdio.h>

int main()
{
    int n, table, i;
    printf("the the number you want table of :-");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d * %d is %d\n", n, i, table);
    }

    return 0;
}