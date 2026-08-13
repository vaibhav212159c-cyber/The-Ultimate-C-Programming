#include <stdio.h>
int main ()
{
   
   int a=1,b=1;
   //printf( "the a and b is %d", a&&b ); if a = 1 and b = 1 then output is 1 if either a or b is 0 out put is 0 
//    printf("the a or b is %d\n", a||b); // or function if a=1 and b=1 output 1 even if either a or b is 0 out put is 1 only if both are 0 out put become 0.
//    printf("the value of not (a) is %d", !a);// if 0 then 1 if 1 then 0 
   if (a&&b)
   {printf("both are true\n"); }

   if (a){
    if(b){printf("both are true");}
   }
    return 0;
}    