#include <stdio.h>
#define n_year 2
#define n_companies 2

void print_arr(int turnover[n_year][n_companies]) {
    for (int i = 0; i < n_year; i++) {
        for (int j = 0; j < n_companies; j++) {
            printf("Enter the turnover for %d year and for %d company\n", i + 1, j + 1);
            scanf("%d", &turnover[i][j]);
        }
    }

    for (int i = 0; i < n_year; i++) {
        for (int j = 0; j < n_companies; j++) {
            printf("The turnover for %d year and for %d company is: %d\n", i + 1, j + 1, turnover[i][j]);
        }
    }
}

int main() {
    int n_students = 2;
    int n_subjects = 5;
    int marks[3][5];

    for (int i = 0; i < n_students; i++) {
        for (int j = 0; j < n_subjects; j++) {
            printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    for (int i = 0; i < n_students; i++) {
        for (int j = 0; j < n_subjects; j++) {
            printf("The marks of student %d in subject %d is : %d\n", i+1, j+1, marks[i][j]);
        }
    }

    // ? QUIZ: Create a 2-D array by taking input from the user and write a display function to print the content of this 2-D array. 

    int turnover[2][5];
    print_arr(turnover);

    return 0;
}