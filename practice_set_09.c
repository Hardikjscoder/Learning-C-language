#include <stdio.h> 

typedef struct vector {
    int x, y;
} vec;

int sumVector(vec vector) {
    int sum = vector.x + vector.y;
    return sum;
}

int main() {
    // ? Exercise 1 - Create a two dimensional vector
    vec vector = {1, 2};
    printf("(%d,%d)\n", vector.x, vector.y);

    // ? Exercise 2 - Write a function sumVector which returns the sum of the two vectors passed to it. The vectors must be two dimensional
    vec vector2 = {2, 2};
    printf("The sum of the vectors is : %d\n", sumVector(vector2));

    return 0;
}