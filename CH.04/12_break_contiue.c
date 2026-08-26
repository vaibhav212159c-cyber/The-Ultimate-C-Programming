#include <stdio.h>

int main ()
{
    int i ;
    for (i = 0; i <=15; i++)
    {
        if(i==5){
            break ; // exite the code now
        }
        printf("the i is %d\n ",i);
    }
    return 0;
}