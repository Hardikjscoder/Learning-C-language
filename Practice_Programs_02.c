#include <stdio.h> 

int fib(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1) 
        return 1;
    else 
        return fib(n - 1) + fib(n - 2);
}

int main() {
    // ? Q2 - Write a program to print fibonacci numbers without using recursion
    /*
    Fibonacci series - 1,1,2,3,5,8,13,21...

    ! Formula - fib(n) = fib(n-1) + fib(n-2) 

    */
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));

    return 0;
}