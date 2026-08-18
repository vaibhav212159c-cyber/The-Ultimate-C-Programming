#include <stdio.h>

int main()
{
    int n;
    printf("the count of natural numbers :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("number is %d\n", i);
    }
    return 0;
}