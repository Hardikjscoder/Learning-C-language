#include <stdio.h> 

int max(int arr[], int length) {
    int maxVal = 0;
    for (int i = 0; i < length; i++) {
        if(arr[i]>maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    // ? Q12 - Find the largest element in an array
    int arr[] = {1,2,3,4,5,6,7,8,9,10,-1,0};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("The largest element in the array is : %d\n", max(arr, length));

    return 0;
}