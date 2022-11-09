#include <stdio.h> 

int main() {
    // ? Q16 - Write a program to sort an array in ascending order
    int arr[] = {5,4,2,1,3};
    // 1,2,3,4,5
    int len = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            // Condition to check whether the current index is greater than the next index of the array
            if(arr[i] > arr[j]) {
                // swap the previous and next index of the element
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } // 5 4 3 2 1 

    // Reverse the array to convert in into ascending order
    for(int k = 0; k < len /2; k++) {
        temp = arr[k];
        arr[k] = arr[len - 1 - k];
        arr[len - 1 - k] = temp;
    } // 1 2 3 4 5 

    // Print the sorted array
    for (int l = 0; l < len; l++) {
        printf("%d ", arr[l]);
    }

    return 0;
}