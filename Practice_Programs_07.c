#include <stdio.h> 

int main() {
    // ? Q7 - Print the following star pattern. 
    
    /*
    
    *
    **
    ***
    ****

    */

    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}