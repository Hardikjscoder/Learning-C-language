#include <stdio.h> 

int main() {
    FILE *ptr;
    int num;
    ptr = fopen("sample2.txt", "r");

    if (ptr == NULL) {
        printf("The file does not exist.\n");
    } else {
        fscanf(ptr, "%d", &num);
        fclose(ptr);
        printf("The value of the number is : %d\n", num);
    }

    return 0;
}