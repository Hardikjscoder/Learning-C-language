#include <stdio.h>

int main() {
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("You rating was 1\n");
        break; // break statement is used when a case matches and you do not want the program to run further and match other cases
    case 2:
        printf("You rating was 2\n");
        break;
    case 3:
        printf("You rating was 3\n");
        break;
    case 4:
        printf("You rating was 4\n");
        break;
    case 5:
        printf("You rating was 5\n");
        break;
    
    default:
        printf("Invalid rating\n");
        break;
    }

    // ? QUIZ : Write a program to find the grade of a student given his marks based on below: 90 - 100 => A, 80 - 90 => b, 70 - 80 => C, 60 - 70 => D

    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks > 100) {
        printf("Enter your marks withing the limit\n");
    } else {

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        break;
    }
    
}

    return 0;
}

/*

Switch statments are similar to if else conditionals but the difference is only of the syntax and the use of case. It becomes handy as we can use break and continue statments with it.

*/