/* via for loop --

#include <stdio.h>

int main ()
{
    int i, sum=0;
    for (i=1;i<=10;i++)
    {
        sum = sum+i;
    }
    printf("%d",sum);


    return 0;
}*/ // for do while loop --

#include <stdio.h>

int main ()
{
    int sum=0 , i=1 ;
    do {
        sum +=i;
        i++;
    }while(i<=10);
    printf("%d",sum);

    return 0;
}