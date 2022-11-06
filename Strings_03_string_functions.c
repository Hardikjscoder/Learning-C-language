#include <stdio.h> 
#include <string.h> 

int main() {
    // FUNCTION 1 - strlen() => Returns the length of the string
    char str[] = "Hello World!";

    char str_length = strlen(str);
    printf("%d\n", str_length);

    // FUNCTION 2 - strupr() => Returns the string in uppercase
    char *str_uppercase = strupr(str);
    printf("%s\n", str_uppercase);

    // FUNCTION 3 - strlwr() => Returns the string in lowercase
    char *str_lowercase = strlwr(str);
    printf("%s\n", str_lowercase);

    // FUNCTION 4 - strrev() => Returns the reversed string
    char *str_reversed = strrev(str);
    printf("%s\n", str_reversed);

    // FUNCTION 5 - strcmp() => Compares the first string with the second string
    char string[] = "Hello World!";
    int str_compare = strcmp(str, string);
    printf("%d\n", str_compare);

    // FUNCTION 6 - strcpy() => Copies the contents of source string to destination string
    char source[] = "Coder";
    char *copied_string = strcpy(str, source);
    printf("%s\n", copied_string);

    // FUNCTION 7 - strcat() => Concatenates two strings
    strcat(str, source);
    printf("%s\n", str);

    return 0;
}