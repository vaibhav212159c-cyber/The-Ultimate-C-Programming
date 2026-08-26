#include <stdio.h>

int main()
{
    int n=10, table, i;
  
    for (i = 10; i >=1; i--)
    {
        table = n * i;
        printf("%d x %d is %d\n", n, i, table);
    } 

    return 0;
}