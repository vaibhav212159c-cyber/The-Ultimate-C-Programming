#include <stdio.h>
//funtion pretotype
int sum(int ,int);
int sub(int,int);


//funtion defination

int sum (int x ,int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}
int sub (int x , int y ){
    printf("the subtrection of those numbers is %d\n",x-y);
}

int main ()

{
    int a=1,b=2;
    sum(a,b); // function call 

    int a1=5,b1=6;
    sum(a1,b1);

    int d = 10,e=4;
    sub(d,e);
   
    return 0;
}  