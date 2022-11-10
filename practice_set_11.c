#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ? Exercise 1 - Write a program to dynamically create an array of size 6 capable of storing 6 integers

    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    // ? Exercise 3 - Solve problem 1 using calloc()

    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    // ? Exercise 4 - Create an array dynamically capable of storing 5 integers. Now use realloc so that it can store 10 integers.

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    // ? Exercise 5 - Create an array of multiplication table of 7 upto 10 (7x10 = 70). Use realloc to mkae it store 15 numbers (7x15=105)

    printf("The multiplication table of 7 upto 10 \n");

    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    int n = 7;

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }

    printf("The multiplication table of 7 upto 15 \n");

    ptr = realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }

    return 0;
}