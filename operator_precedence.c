#include <stdio.h>

int main() {

    int a = 5;
    int b = 3;
    printf("The answer is %d\n", 3 * a - 8 * b);
    printf("The answer is %d\n", 3 * a / 8 * b);

    return 0;
}

/*
 In C language, there is no BODMAS. We have to use operator precedence for this. 
The priority for the operators in C is

1st => * / %
2nd => + - 
3rd => =

In case if the operator in an expression are of highest priority that is either * or / then we use operator associativity that follows from left to right.

*/
