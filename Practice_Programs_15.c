#include <stdio.h> 

int main() {
    // ? Q15 - Write a program to reverse an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}