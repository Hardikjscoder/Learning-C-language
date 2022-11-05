#include <stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    a = 4;
    b = 5;
    printf("The value of a and b before running the function is : %d and %d\n", a, b);
    printf("The sum of a and b is: %d\n", sum(a,b));
    printf("The value of a and b after running the function is : %d and %d\n", a, b);

    return 0;
}

int sum(int a, int b) {
    int c = a + b;
    a = 343;
    b = 455;
    return  c;
}

/*

Types of function calls
- Call by value -> Sending the values of arguments
- Call by reference -> Sending the address of arguments

*/