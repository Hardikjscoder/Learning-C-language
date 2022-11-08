#include <stdio.h> 

int main() {
    // ? Q9 - Print the following star pattern
    /*
    
    ****
    ***
    **
    *
    
    */

    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(((n - 1) - j) >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}