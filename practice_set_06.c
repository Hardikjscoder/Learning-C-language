#include <stdio.h>

// Prototypes for functions
void print_address(int i);
void changeVal(int *b);
void sum_avg(int x, int y, int *sum, float *average);
void newValue(int a);

int main() {
    // Exercise 1 - Write  a program to print the address of a variable. Use this address to get the value of the variable.
    int a = 4;
    int *p;
    p = &a;
    // *p => value
    // p => address

    // Value
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);

    // Address
    printf("The address of a is %u\n", p);
    printf("The address of a is %u\n", &a);

    // Exercise 2 - Write a program having variable 'i' and print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

    int i = 5;
    printf("The address of i is %u\n", &i);
    print_address(i);

    // Exercise 3 - Write a program to change the value of a variable ten times to its current value. Write a function and pass this value by reference.

    int b = 3;
    changeVal(&b);

    // Exercise 4 - Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average.

    int x, y, sum;
    float average;
    x = 500;
    y = 255;
    sum_avg(x, y, &sum, &average);
    printf("The sum of the two numbers is %d\n", sum);
    printf("The average of the two numbers is %.2f\n", average);

    // Exercise 5 - Write a program to print the value of a variable using pointer to a pointer variable

    int h = 8;
    int *j;
    j = &h;

    int **k;
    k = &j;
    printf("The value of h = %u\n", **k);

    // Exercise 6 - Try exercise 3 using call by value
    int originalVal = 2;
    newValue(originalVal);

    return 0;
}

// Function Definition
void print_address(int i) {
    printf("The address of i is %u\n", &i);
}

void changeVal(int *b) {
    int value = *b;
    int newValue = 10 * value;
    printf("The value of b is %d\n", value);
    printf("The new value of b is %d\n", newValue);
}

void sum_avg(int x, int y, int *sum, float *average) {
    *sum = x + y;
    *average = (float)*sum / 2;
}

void newValue(int a) {
    printf("The value of a is %d\n", a );
    printf("The new value of a is %d\n", a * 10);
}