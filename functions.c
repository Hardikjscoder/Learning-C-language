#include <stdio.h>
#include <math.h>

// ****** Function prototype ****** 
void greet();
int sum(int a, int b);
void printNaturalNumbers();
void greet_morning();
void greet_afternoon();
void greet_night();
int calculateArea(int n);

int main() {
    // ****** Function call ****** 
    greet();
    sum(30,40);
    printNaturalNumbers();
    greet_morning();
    greet_afternoon();
    greet_night();
    calculateArea(6);
    return 0;
}

// ****** Function definition ****** 
void greet() {
    printf("Hello world!\n");
}

// ? Write a function to add two given numbers
int sum(int a, int b) {
    int sum = a + b;
    printf("The sum of the two numbers is : %d\n", sum);
    return sum;
}

// ? Write a function to print first 10 natural numbers
void printNaturalNumbers() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}

// ? QUIZ: Write a program to print 'Good Morning','Good Afternoon' and 'Good Night'

void greet_morning() {
    printf("Good Morning\n");
}

void greet_afternoon() {
    printf("Good Afternoon\n");
}

void greet_night() {
    printf("Good Night\n");
}

// ? Write a program to calculate the area of a square
int calculateArea(int n) {
    int area = pow(n, 2);
    printf("The are of the square is : %d units^2\n", area);
    return area;
}


/*

A function is a block of code that is used to perform a certain task.

! NOTE: If we use void with a function, then it means that the function is not returning anything. With the main() function we use int as returns 0. But if we don't return anything then we will can use void instead of int. 
? VOID == NULL

Components of a function
- Prototype
- Call
- Definition

! Important points
- Execution of a C program starts from the main() function
- A C program can have more than one function
- Every function is directly or indirectly called from main() function

! Types of functions
- Library functions
- User defined functions

? Why use functions
- To avoid writing the same code and logic again and again 
- To keep track of what we are doing in a program
- To test and check logic independently 

*/