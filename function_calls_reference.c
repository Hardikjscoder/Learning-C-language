#include <stdio.h>

void wrong_swap(int x, int y); // call by value => value
void swap(int *x, int *y); // call by reference => address 

int main() {
    int x = 4, y = 5;
    printf("The values of x and y before swap are : %d and %d\n", x, y);
    // wrong_swap(x,y);// will not work due to call by value
    swap(&x, &y); // will work due to call by reference
    printf("The values of x and y after swap are : %d and %d\n", x, y);
    return 0;
}

void wrong_swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp; 
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
}