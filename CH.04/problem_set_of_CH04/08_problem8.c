#include <stdio.h>

int main()
{
    int num, i, fact = 1,a;
    printf("enter the number :");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        a = num - i;
        fact = fact * a;
    }
    printf("%d", fact);

    return 0;
}