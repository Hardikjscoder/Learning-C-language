// In this file, we will understand that how to take input from the user using scanf() function
#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("The value of a is %d", a);
    return 0;
}

/* 

- scanf() function is used to take input from the user and store it in a variable
Here we first declared a variable 'a' and then took its value from the user using scanf() function and then printed its value entered by the user.

NOTE: 
%d, %f, %c => format specifier
& => address of 

*/