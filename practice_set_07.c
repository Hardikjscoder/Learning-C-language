#include <stdio.h> 

int positive_count(int *integers, int length_ints) {
    int count = 0;
    for (int i = 0; i < length_ints; i++) {
        if (integers[i] > 0) {
            count++;
        }
    }
    return count;
}

void printTable(int *mulTable, int number, int n) {
    for (int i = 1; i <= n; i++) {
        mulTable[i] = number * i;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", number, i, mulTable[i]);
    }
}

int main() {
    // ? Exercise 1 - Create an array of 10 numbers. Verify using the pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

    int num_arr[] = {1,2,3,4,5,6,7,8,9,10,};
    int *ptr = num_arr;
    ptr = ptr + 2;

    if (ptr == &num_arr[2])
        printf("true\n");
    else 
        printf("false\n");

    // ! HENCE VERIFIED

    // ? Exercise 2 - Write a program to create an array of 10 number and store multiplication table of n in it.

    int arr[] = {1,2,3,4,5,6,7,8,9,10,};
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++) {
        arr[i] = n * i;
    }
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n",n, i, arr[i]);
    }

    // ? Exercise 3 - Repeat the problem 3 for a general input provided by the user using scanf.
    int n2;
    printf("Enter the value of n2\n");
    scanf("%d",&n2);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n2, i, n2 * i);
    }

    // ? Exercise 4 - Write a program to reverse an array.
    int array[] = {1, 2, 3, 4};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Reversed array: \n");

    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    // ? Exercise 5 - Write a program which counts the number of positive integers in an array
    int integers[] = {-1, 1, -2, 3, 0, 2, 9, 5};
    int length_ints = sizeof(integers) / sizeof(integers[0]);

    printf("Positive integers in the array are: %d\n", positive_count(integers, length_ints));

    // ? Exercise 6 - Create an array of size 3x10 containing the multiplication table of number 2,7 and 9 respectively.

    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    // ? Exercise 7 - Create a 3d array and print the address of its elements.'
    int multidim_arr[2][3][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("The address of multidim_arr[%d][%d][%d] is %u\n", i, j, k, &multidim_arr[i][j][k]);
            } 
        }
    }

    return 0;
}

/*

! IMP : Logic to reverse the array
=> int array[] = {1,2,3,4};
=> int length_calculate = sizeof(array)/sizeof(array[0]);

=> for loop to reverse the array
=> for (int i = length - 1; i >= 0; i--) { 
        printf("%d", array[i]); 
    }

*/