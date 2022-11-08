#include <stdio.h> 

int main() {
    // ? Q3 - Write a program to print the fibonacci series without using recursion

    // Take the number of terms from the user
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int a = 0, b = 1, c; //Required variables

    printf("%d %d ", a, b); // printing 0 and 1 values

    for (int i = 2; i < n; ++i) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    /*
    Algorithm of the for loop:
    a = 0, b = 1 
    a = b
    b = c

    a = 0  b = 1 => a + b = c => c = 1 
    a = 1, b = 1 => a + b = c => c = 2
    a = 1, b = 2 => a + b = c => c = 3
    a = 2, b = 3 => a + b = c => c = 5
    a = 3, b = 5 => a + b = c => c = 8

    */

    return 0;
}