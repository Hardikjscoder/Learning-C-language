#include <stdio.h>

int main() {

    // EXERCISE 1 - Calculate the area of a rectangle
    // Using hard coded values
    int length, breadth;
    length = 4;
    breadth = 5;
    printf("The area of the rectangle is %d cm^2", length * breadth);

    // Using scanf() function
    int a, b;
    printf("Enter the value of the length \n");
    scanf("%d", &a);
    printf("Enter the value of the breadth \n");
    scanf("%d", &b);
    printf("The area of the rectangle is %d cm^2", a * b);

    // EXERCISE 2 - Calculate the area of a circle
    float PI = 3.14;
    float radius = 4.0;
    printf("The area of the circle is %f cm^2", PI * radius * radius);


    // EXERCISE 3 - Write a program to calculate the simple interest
    int principal = 5000;
    int years = 2;
    int interest = 10;
    int simple_interest = principal * years * interest / 100;
    printf("The simple interest is %d", simple_interest);

    // EXERCISE 4 - Write a program to convert from celsius to fahrenheit
    int celsius_magnitude = 37;
    int conversion = celsius_magnitude * 9 / 5 + 32;
    printf("Conversion from celsius to fahrenheit is %d", conversion);

    return 0;
}