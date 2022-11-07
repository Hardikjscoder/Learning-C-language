#include <stdio.h> 
#include <string.h> 
#include <complex.h> 
typedef struct vector {
    int x, y;
} vec;

int sumVector(vec vector) {
    int sum = vector.x + vector.y;
    return sum;
}

typedef struct BankAccount {
    char name[20];
    int balance;
    int savings;
    char account_number[11];
} acc;

typedef struct ComplexNumber {
    int real, imaginary;
} cpxn;

typedef struct Date {
    int date, month, year;
} dt;

void displayDate(dt d) {
    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int comparDate(dt d1, dt d2) {
    if(d1.year > d2.year) {
        return 1;
    } 
    if(d2.year > d1.year) {
        return -1;
    }
    if(d1.month > d2.month) {
        return 1;
    } 
    if(d2.month > d1.month) {
        return -1;
    }
    if(d1.date > d2.date) {
        return 1;
    } 
    if(d2.date > d1.date) {
        return -1;
    }
    if (d1.date == d2.date && d1.year == d2.year && d1.month == d2.month) {
        return 0;
    }
    return 0;
}

int main() {
    // ? Exercise 1 - Create a two dimensional vector
    vec vector = {1, 2};
    printf("(%d,%d)\n", vector.x, vector.y);

    // ? Exercise 2 - Write a function sumVector which returns the sum of the two vectors passed to it. The vectors must be two dimensional
    vec vector2 = {2, 2};
    printf("The sum of the vectors is : %d\n", sumVector(vector2));

    // ? Exercise 3 - Create a structure representing the bank account of a customer.
    acc customer = {"Monhandas Kumar", 300000, 50000, "XXXXXXXXXXX"};
    printf("The name of the customer is : %s\n", customer.name);
    printf("The balance of the customer is : %d\n", customer.balance);
    printf("The savings of the customer is : %d\n", customer.savings);
    printf("The account number of the customer is : %s\n", customer.account_number);

    // ? Exercise 4 - Write a structure representing a complex number
    cpxn complexNum = {2,3};
    printf("The complex number is : %d,%d\n", complexNum.real, complexNum.imaginary);

    // ? Exercise 5 - Write a structure capable of storing date. Write a function to compare those dates.
    dt Date1 = {8, 9, 7};
    dt Date2 = {14, 3, 9};
    displayDate(Date1);
    displayDate(Date2);

    int a = comparDate(Date1, Date2);
    printf("Test results : %d\n", a);

    return 0;
}