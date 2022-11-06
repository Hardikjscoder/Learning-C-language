#include <stdio.h> 

int main() {
    char string[45]; // the size of an array must be greater than zero
    printf("Enter your name: \n");
    gets(string); // helps to print multi word string
    printf("Your name is : %s\n", string);

    char str[] = "Hardik Rana";
    puts(str); // replacement of the printf() function and it gives the output of a string 

    return 0;
}

/*
!NOTE
1. Once a string is defined using char str[] = "Hardik Rana", it cannot be reinitialized to something else.
2. However, a string can be reinitialized using pointers.
ptr = "Hardik Rana";
*/