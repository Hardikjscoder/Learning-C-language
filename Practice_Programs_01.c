#include <stdio.h> 

int main() {
    // ? Q1 - Write a program to swap two numbers without using a third variable
    int a, b;
    a = 3;
    b = 5;

    a = a + b;
    b = a - b;
    a = a - b;

    /* 
    Algorithm : 
    a = 3, b= 5
    a = a+b
    a = 8, b = 5
    b = a - b
    a = 8, b = 3
    a = a - b
    a = 5, b = 3
    */

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}