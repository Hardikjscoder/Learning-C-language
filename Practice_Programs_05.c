#include <stdio.h> 

int main() {
    // ? Q5 - Write a program to check for palindrome
    /*
        Palindrome Number - 121, 22, 11, 1221, etc. 
    */

    int n, temp;
    printf("Enter the number : ");
    scanf("%d", &n);

    temp = n;

    // Reverse the number
    int reverse = 0, remainder;
    while (n!=0) {
        remainder = n % 10; // gives the last digit of the number
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    // Check for palindrome
    if (temp == reverse) {
        printf("The number is palindrome.\n");
    } else {
        printf("The number is not palindrome.\n");
    }

    return 0;
} 

/*

Algorithm to reverse number:
1. Ask the user to enter any number.
2. Declare and initialize another variable reversed with 0, where reversed an integer variable.
Get the last digit of the given number by performing the modulo division (%) and store the value in last_digit variable, likey last_digit= number % 10.
3. Multiply reversed by 10 and add last_digit, like reversed = reversed*10 + last_digit.
4. Divide numbered by 10, like numbered/10.
5. Repeat the steps 3 to 5 till numbered is not equal to (or greater than) zero.

*/