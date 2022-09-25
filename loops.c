#include <stdio.h>

int main() {
    // ! WHILE LOOP

    // ? Print numbers from 0 to 10

    int a = 0;
    while (a <= 10) {
        printf("%d\n", a);
        a++;
    }

    // ? QUIZ: Write a program to print natural numbers from 10 to 20 when initial loop counter is intialized to zero.
    int x = 0;
    while(x <= 20) {
        if (x >= 10) {
            printf("%d\n", x);
        }
        x++;
    }

    // ! Do-WHILE LOOP
    int b = 0;
    do {
        printf("%d\n", b);
        b++;
    } while (b <= 10);

    // ? QUIZ: Write a program to print first n natural numbers using do while loop.
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    int integer = 1;

    do {
        printf("%d\n", integer);
        integer++;
    } while (integer <= number);

    // ! FOR LOOP
    for (int y = 0; y <= 10; y++) {
        printf("%d\n", y);
    }

    // ? QUIZ: Write a program to print first n natural numbers using for loop
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    // ? QUIZ: Write a program to print second n natural numbers using in reverse order
    int num;
    printf("Enter the value of num \n");
    scanf("%d", &num);

    for (int i = num; i ; i--) {
        printf("%d\n", i);
    }

    return 0;
}

/*
We use loops in order to something that has to be done over and over again.
For example - if you want to print numbers from 1 to 10, then you might not want to use printf() and keep doing it over and over again. Instead , you should use loops.

We have three types of loops :-
- While loop
- Do-while loop
- For loop

The syntax of while loop is somthing like this: 

while (condition) {
    code 
    incrementation or decrementation
}

NOTE: If the condition never becomes false, the while loop keeps executing. Such a loop is known as infinite loop.

Do-while loop = while loop which executes at least one once beacuse the loop executes at least once and then the condition is checked. Even if the condition never becomes true, the loop will still execute at least once.

The syntax of do while loop is somthing like this :-

do {
    code 
    incrementation or decrementation
} while (condition)

The syntax of for loop is somthing like this :-

for (intialisation; condition; incrementation or decrementation) {
    code 
}

Break statement is used to break the loop execution  and exits the loop
Continue statement is used to skip the particular itearation of a loop  
*/