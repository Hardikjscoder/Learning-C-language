#include <stdio.h>

int main() {
    // ? Exercise 1 - Write  a program to print mutliplication table of a given number n
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n",n, i , n * i);
    }

    // ? Exercise 2 - Write a program to sum first 10 natural numbers using a while loop
    int sum = 0, integer = 0;
    while(integer <= 10) {
        sum += integer;
        integer++;
    }
    printf("%d\n", sum);

    // ? Exercise 3 (PART 1) - Solve the exercise 2 using do while loop
    int sum = 0, integer = 0;
    do {
        sum += integer;
        integer++;
    } while (integer <= 10);
    printf("%d", sum);

    // ? Exercise 3 (PART 2) - Solve the exercise 2 using for loop
    int sum = 0;
    for (int integer = 0; integer <= 10; integer++) {
        sum += integer;
    }
    printf("%d", sum);

    // ? Exercise 4 - Write a program to calculate the sum of the numbers occuring int the multiplication table of 8.
    int n = 8;
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        int multiples = n * i;
        sum += multiples;
    }
    printf("%d\n", sum);

    // ? Exercise 5 - Write a program to calculate the factorial of a given number using a for loop
    int i = 0, n = 5, factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("The value of factorial %d is %d", n, factorial);

    // ? Exercise 6 - Write a program to find whether a number is prime or not
    int n, prime = 1;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if(n%i==0) {
            prime = 0;
            break;
        }
    }

    if (prime == 0) {
        printf("This is not a prime number.\n");
    } else {
        printf("This is a prime number.\n");
    }

    return 0;
}