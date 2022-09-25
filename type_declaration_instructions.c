#include <stdio.h>

int main() {
    int a = 4, b, c; // Type declration instruction
    b = c = a;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);

    // ! Lets see an error
    float x = 1.1;
    float y = x + 2.1; // This is correct 
    printf("The value of y is %f\n", y);

    //! float l = m + 2.0;  This will produce error as 'm' is declared after its usage
    //! float m = 3.0;
    // printf("The value of l is %f\n", l);

    return 0;
}

/*

We have three types of instructions in C language
- Type declaration instruction
- Arithmetic instruction
- Control instruction

*/
