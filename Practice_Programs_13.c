#include <stdio.h> 

int main() {
    // ? q13 - Write a program to reverese a number

    int n;
    printf("Enter the value of the number\n");
    scanf("%d", &n);

    int reverse = 0, last_digit;

    while (n != 0)
    {
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }

    printf("%d", reverse);

    return 0;
}