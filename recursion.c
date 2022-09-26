#include <stdio.h>

int factorial(int n);

int main() {
    printf("%d\n", factorial(6));
    return 0;
}

int factorial(int n) {
    printf("Calling function %d\n", n);
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return factorial(n-1) * n; // formula to calculate factorial
    }
}

/*

? Recursion => A function defined in C can call itself. This is called recursion. A function calling itself is aslo called 'recursive function'.

Example of recursion:
- Factorial 

! Important points
- Recursion is sometimes the most direct way to code an alogrithm
- The condition which doesn't call the function any further in a recursive function  is called a base condition
- Sometimes due to a mistake made by the programmer a recursive function can keep runnning without returning resulting in a memory error

*/