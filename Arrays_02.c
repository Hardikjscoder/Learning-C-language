#include <stdio.h> 

int main() {
    // Printing the elements of an array
    
    // Creating an array
    int marks[] = {1, 2, 3, 4};

    // Calculating the length of the array
    int length = sizeof(marks)/ sizeof(marks[0]);

    printf("The marks are :\n");

    // Looping through the array by incrementing value of i
    for(int i = 0; i < length; i++) {
        printf("%d\n", marks[i]);
    }
    return 0;
}