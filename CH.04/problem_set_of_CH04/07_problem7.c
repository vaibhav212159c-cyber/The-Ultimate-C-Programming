#include <stdio.h>

int main()
{
    int i, table, num , sum = 0;
    printf("enter the table number : ");
    scanf("%d",&num);
    for (i = 1; i <= 10; i++)
    {
        table = num * i;
        sum +=table;
    }
    printf("the sum of the table of %d is :%d", num,sum);
    return 0;
}
