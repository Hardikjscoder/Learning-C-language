#include <stdio.h> 

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    // ? Q6 - Write a program to calculate the facotrial of a number using recursion
    int n;
    printf("Enter the value of the number : ");
    scanf("%d", &n);
    printf("The facotrial of the number is : %d", factorial(n));

    return 0;
}

/* 

Algorithm of Factorial Program in C
The algorithm of a C program to find factorial of a number is:

1. Start program
2. Ask the user to enter an integer to find the factorial
3. Read the integer and assign it to a variable
4. From the value of the integer up to 1, multiply each digit and update the final value
5. The final value at the end of all the multiplication till 1 is the factorial
6. End program

*/