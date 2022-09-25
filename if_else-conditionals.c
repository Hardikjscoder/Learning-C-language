#include <stdio.h>

int main() {
    int a;
    int vipPass = 0;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    if (a == 1){
        printf("The value entered is 1\n");
    } else {
        printf("The value entered is not 1");
    }

    // Program to see whether a number is even or odd.

    if (a % 2 == 0){
        printf("The value entered is even\n");
    } else {
        printf("The value entered is odd\n");  
    }

    // Program to check whether a person can drive or not.
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can drive \n");
    } else {
        printf("You cannot drive \n");
    }    

    // Else if 
    if (age == 18) {
        printf("You are adult\n");
    } else if(age > 18) {
        printf("You are old\n");
    } else {
        printf("You are young\n");
    }

    // Logical operators
    if (age >= 18 || vipPass == 1) {
        printf("You can go to the party\n");
    } else {
        printf("You cannot go to the party\n");
    }

    // Ternary Operators - Single liner conditionals
    int x = 1;
    x >= 1 ? printf("The value of x is greater than or equal to 1\n") : printf("The value of x is not greater than or equal to 1\n");

    return 0;
}

/*

If-else conditionals are used for decision making and making conditions. 

The execution takes place if the condition in 'if' is true then the code in that statement will run otherwise it will go under else statement.
NOTE: Else statments are optional and if the statment in the 'if' conditional is false then the program will stop running.

Relational operators in C are >, <, <=, >=, != and == 
Logical operators in C are &&, || and ! 

*/