#include <stdio.h>

int main() {
    int i = 4;
    // Declaring the pointer
    int *j;
    j = &i;
    // *j => value
    // %i => address

    // Print the values of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);

    // Print the address of i
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);

    // Print the address of j
    printf("The address of j is %u\n", &j);

    // Print the value of j
    printf("The value of j is %u\n", *(&j));

    // ! POINTER TO A POINTER
    int **k;
    k = &j;

    // Print the address of k
    printf("The address of k is %u\n", &k);

    // Print the value of k
    printf("The value of k is %u\n", *(&k));

    return 0;
}

/*

? A pointer is a variable which stores the address of another variable

The "address of" (&) operator
- Used to obtain the address of a variable

Format specifier for printing pointer address is '%u'

The 'value at address' operator '*'
- It is used to obtain the value present at a given memory address. It is denoted by *

? How to declare a pointer
A pointer is declared using the following syntax:
int *j; => declares a variable j of type int
j = &i => stores address of i in j

Just like pointer of type integer, we also have pointer to chars and float
int *ch_ptr;
char *ch_ptr;
float *ch_ptr;

? Pointer to a pointer
Just like j is pointer in or storing the address of i, we can have another variable k which can further store the address of j. What wll be the type of k

int **k;
k = &j;

! Here k is the pointer which is storing the address of j which itself is storing the address of i which is an integer 

We can go further one level and create a variable & of type int *** to store the address of k. We mostly use int *  and int ** sometimes in real world programs.


*/