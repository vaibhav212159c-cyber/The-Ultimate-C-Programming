#include <stdio.h>

int main ()
{
    int num, i=0, fact = 1,a;
    printf("enter the number :");
    scanf("%d", &num);
    while (i<num){
        a = num - i;
        fact *=a;
        i++;
    }
    printf("%d",fact);
    
    return 0;
}