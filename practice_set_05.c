#include <stdio.h>

int average(int a, int b, int c);
float celsius_to_fahrenheit(float C);
float weight(float m, float g);
int fibonacci(int n);
int sum(int x);

int main() {
    printf("Average of the three numbers is : %d\n", average(1541, 3152, 6153));
    printf("Conversion result : %f deg F \n",celsius_to_fahrenheit(37));
    printf("The force of attraction is : %.0f N \n",weight(60, 9.8));
    printf("%d\n", fibonacci(8));
    printf("%d\n", sum(10));
    return 0;
}

// ? Exercise 1 - Write a program to find average of three numbers

int average(int a, int b, int c) {
    int avg = (a + b + c) / 3;
    return avg;
}

// ? Exercise 2 - Write a program to convert celsius to fahrenheit
float celsius_to_fahrenheit(float C) {
    float conversion = C * 9 / 5 + 32;
    return conversion;
}

// ? Exercise 3 - Write a program to find the force of attraction on a body of mass 'm' exerted by earth. [Take g = 9.8 m/s^2]

float weight(float m, float g) {
    float formula = m * g;
    return formula;
}

// ? Exercise 4 - Write a program to using recursion to find the nth element of fibonacci series

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// ? Exercise 6 - Write  a program to calculate the sum of first n natural numbers using recursion

int sum(int x) { 
    if (x == 1) {
        return 1;
    } else {
        return x + sum(x - 1);
    }
}