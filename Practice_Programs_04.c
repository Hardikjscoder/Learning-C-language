#include <stdio.h> 

int main() {
    // ? Q4 - Write a program to check for prime number
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    int flag = 1;

    for (int i = 2; i < n; i++) {
        if(n%i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) {
        printf("The number is prime.\n");
    } else {
        printf("The number is composite.\n");
    }

    return 0;
}