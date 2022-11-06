#include <stdio.h> 

int main() {
    // Mathematical operations on the pointers
    int i = 34;
    int *ptr1;
    ptr1 = &i;
    printf("The value of pointer is %u\n", ptr1);
    ptr1++;
    printf("The value of pointer is %u\n\n", ptr1);

    char c = 'c';
    char *ptr2;
    ptr2 = &c;
    printf("The value of pointer is %u\n", ptr2);
    ptr2++;
    printf("The value of pointer is %u\n\n", ptr2);

    float f = 5.4;
    float *ptr3;
    ptr3 = &f;
    printf("The value of pointer is %u\n", ptr3);
    ptr3++;
    printf("The value of pointer is %u\n", ptr3);

    // Comparison between pointers 
    int a = 4;
    int *j;
    j = &a;
    int **k;
    k = &j;

    int b = 5;
    int *l;
    l = &b;

    if (*j == **k) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

/*

Following operations can be performed on pointers are :
- Addition of a number to a pointer
- Subtraction of a number from a pointer
- Subtraction of a pointer from another pointer
- Comparison of two pointer variables

*/