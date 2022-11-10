#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, *ptr2;
    ptr2 = (int *)malloc(600 * sizeof(int));

    for (int i = 0; i < 600; i++)
    {
        ptr = (int *)malloc(60000 * sizeof(int));
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
        free(ptr2); // free memory allocated
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is: %d\n", i, ptr[i]);
    }
    return 0;
}