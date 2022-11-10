#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is: %d\n", i, ptr[i]);
    }

    return 0;
}

/*

What is Dynamic Memory Allocation?
- Dynamic Memory Allocation is a way to allocate memory to a data structure during the
runtime. We can use DMA functions to allocate and free memory during runtime.

Functions for Dynamic Memory Allocation in C:
1. malloc()
2. calloc()
3. free()
4. realloc()

-> malloc() => Stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void.

-> calloc() => Stands for continuous allocation. It intializes each memory block with a defualt value of 0.

-> free() => Used to de allocate the memory.
The memory allocated using calloc/malloc is not deallocated automatically.

-> realloc() => Used to allocate memory of new size using the previous pointer and size.

*/