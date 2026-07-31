#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;
    printf("the ans of a b and c is %d\n", a * b / c + 7); // ans will be 9 couse first * slove then / solve 3*6=18 ans 18/9=2 and +7 = 9ans
    printf("%d", 3 * b / 2 * c + 7 * a);                   // it's ans will be 102
    // 3*b/2*c+ 7 * 3
    // 18/2*c+7*3
    // 18/2*c+21
    // 9*c+21
    // 9*9+21

    // 81+21
    // 102

    return 0;
}