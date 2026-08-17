#include <stdio.h>

int main ()
{
    int num = 1,count;
    printf("enter the count of natural numbers:");
    scanf("%d",&count);
    do {
        printf(" %d\n",num);
        num++;
    } while (num<=count);
    return 0;
}