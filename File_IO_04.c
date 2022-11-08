#include <stdio.h> 

int main() {
    FILE *ptr;
    ptr = fopen("sample3.txt", "r");

    // char c = fgetc(ptr);
    // printf("The value of the character is : %c\n", c);

    // To print the whole sentence in the file
    while (1) {
        char c = fgetc(ptr);
        if (c ==  EOF) {
            break;
        }
        printf("%c", c);
    }

    fclose(ptr);

    return 0;
}