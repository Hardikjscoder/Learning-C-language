#include <stdio.h> 

int main() {
    FILE *ptr;
    ptr = fopen("sample3.txt", "w");

    int num = 45;
    fprintf(ptr, "The number is : %d\n", num);
    fclose(ptr);

    return 0;
}