#include <stdio.h>

int main() {
    // ? Exercise 1 - Write a program to find whether a student is pass or fail, if he requires total 40% in to pass. Asssume 3 subjects and take marks as input from the user.

    float maths, physics, biology;
    printf("Enter your maths marks\n");
    scanf("%f", &maths);
    printf("Enter your physics marks\n");
    scanf("%f", &physics);
    printf("Enter your biology marks\n");
    scanf("%f", &biology);

    float total = 300;
    float sum = maths + physics + biology;
    float percentage = sum / total * 100;
    printf("Sum: %f\n", sum);
    printf("Percentage: %f\n", percentage);

    if (percentage > 40) {
        printf("Pass");
    } else {
        printf("Fail");
    }

    // ? Exercise 2 - Calculate income tax paid by an employee to the govt. as per the slabs mentioned: 2.5L - 5.0L => 5%, 5.0L - 10.0L => 20%, Above 10.0L => 30%. There is no tax for income below 2.5L.

    float income;
    float tax = 0;
    printf("Enter your income\n");
    scanf("%f", &income);
    
    if(income >= 250000 && income <= 500000) {
        tax = tax + 0.05 * (income - 250000);
    } 
    if (income >= 500000 && income <= 1000000) {
        tax = tax + 0.2 * (income - 500000);
    } 
    if (income >= 1000000) {
        tax = tax + 0.3 * (income - 1000000);
    }

    printf("Your income tax to be paid is : %f\n", tax);

    // ? Exercise 3 - Write a program to find whether the year entered by the user is a leap year or not

    int year;
    printf("Enter the year \n");
    scanf("%d", &year);

    if(year%4 == 0) {
        printf("The year is a leap year.\n");
    } else {
        printf("The year is not  a leap year.\n");
    }

    // ? Exercise 4 - Write a program to determine whether a character entered by a user is lowecase or uppercase

    char character;
    printf("Enter a character\n");
    scanf("%c", &character);

    if(character >= 'a' && character <= 'z') {
        printf("Lowercase\n");
    } else if(character >= 'A' && character <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Invalid character\n");
    }

    // ? Exercise 5 - Write a program to find the greatest of three numbers entered by the user
    int number1, number2, number3, number4;
    printf("Enter the first number\n");
    scanf("%d", &number1);
    printf("Enter the second number\n");
    scanf("%d", &number2);
    printf("Enter the third number\n");
    scanf("%d", &number3);
    printf("Enter the fourth number\n");
    scanf("%d", &number4);

    if(number1 > number2 && number1 > number3 && number1 > number4) {
        printf("The first number is the greatest");
    } else if(number2 > number1 && number2 > number3 && number2 > number4) {
        printf("The second number is the greatest");
    } else if (number3 > number2 && number3 > number1 && number3 > number4) {
        printf("The third number is the greatest");
    } else if (number4 > number2 && number4 > number1 && number4 > number3) {
        printf("The fourth number is the greatest");
    } else {
        printf("All numbers are equal");
    }

    return 0;
}