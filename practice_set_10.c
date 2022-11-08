#include <stdio.h> 

int main() {
    // ? Exercise 1 - Write a program to read three integers from a file.
    FILE *ptr1;
    ptr1 = fopen("sample2.txt", "r");
    int num1, num2, num3;
    fscanf(ptr1, "%d", &num1);
    fscanf(ptr1, "%d", &num2);
    fscanf(ptr1, "%d", &num3);

    printf("The first integer is : %d\n", num1);
    printf("The second integer is : %d\n", num2);
    printf("The third integer is : %d\n", num3);

    fclose(ptr1);

    // ? Exercise 2 - Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

    FILE *ptr2;
    ptr2 = fopen("sample.txt", "w");

    int n = 13;

    fprintf(ptr2,"The multiplcation table of the given number is : \n");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr2, "%d x %d = %d\n", n, i, n*i);
    }
    fclose(ptr2);

    // ? Exercise 3 - Write a program to modify a file conataining an integer to double its value.
    FILE *ptr3;
    ptr3 = fopen("prev.txt", "w");
    int num = 3;
    fprintf(ptr3, "%d", num);
    fclose(ptr3);

    FILE *ptr4;
    ptr4 = fopen("next.txt", "w");
    fprintf(ptr4, "%d", num * 2);
    fclose(ptr4);

    // ? Exercise 4 - Take name and salary of two employees as input from the user and write them to a text file in the following format.
    FILE *ptr5;
    ptr5 = fopen("sample4.txt", "w");

    char name1[20], name2[20];
    printf("Enter the name of the first employee\n");
    scanf("%s", name1);
    printf("Enter the name of the second employee\n");
    scanf("%s", name2);

    int salary1, salary2;
    printf("Enter the salary of the first employee\n");
    scanf("%d", &salary1);
    printf("Enter the salary of the second employee\n");
    scanf("%d", &salary2);

    fprintf(ptr5, "%s,%d\n",name1,salary1);
    fprintf(ptr5, "%s,%d\n",name2,salary2);
    fclose(ptr5);

    // ? Exercise 5 - Write a program to read a text file character by character and write its content twice in a seperate file.
    FILE *ptr6;
    ptr6 = fopen("fileA.txt", "r");

    FILE *ptr7;
    ptr7 = fopen("fileB.txt", "w");

    char c = fgetc(ptr6);
    while(c!=EOF) {
        fputc(c, ptr7);
        fputc(c, ptr7);
        c = fgetc(ptr6);
    }

    fclose(ptr6);
    fclose(ptr7);

    return 0;
}