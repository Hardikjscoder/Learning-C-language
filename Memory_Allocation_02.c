#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int *ptr;
    // ptr = (int *)calloc(6, sizeof(int));

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of %d is: %d\n", i, ptr[i]);
    // }

    // TODO : Write a program to create an array of size n using calloc where n is an integer entered by the user.
    int *ptr;
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d is: %d\n", i, ptr[i]);
    }

    return 0;
}
