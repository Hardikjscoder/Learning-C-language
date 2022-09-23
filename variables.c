// In this file, we will discuss the variables in C language

#include <stdio.h>
int main() {

    int a = 2;
    float b = 1.2;
    char c = 'c';
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    // TODO - Create a program to add two numbers
    int number1 = 4;
    int number2 = 5;
    printf("The sum of number1 and number2 is %d\n", number1 + number2);    

    return 0;
}

/*

There are several keywords used to create variables :-
- int => number (specifically)
- const => constant values
- float,etc. => float values

Rules for creating variables :-
- First character must be an alphabetic or underscore
- No commas or blanks are allowed
- No other special symbol except for the underscore
- Variable names are case sensitive and cannot be named on a reserved keyword in C. Ex - int double; (Wrong syntax)

Types of variables :-
- Integer => int a = 2;
- Real => float b = 1.2;
- Character => char c = "c";

We should use only use that type of variable for which we are declaring the value. for example - int c = 'c; is not recommeded
we should rather use char for the same

*/
