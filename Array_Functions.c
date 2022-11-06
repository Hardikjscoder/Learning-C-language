#include <stdio.h> 

// void print_arr(int *ptr, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("The value of element %d is %d\n", i+1,*(ptr+i));
//     }
// }

// ALternative method

void print_arr(int ptr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_arr(arr, 10);
    return 0;
}