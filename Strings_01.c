#include <stdio.h> 
#include <string.h> 

int main() {
    // METHOD 1 TO CREATE A STRING AND PRINT IT
    char str[] = {'H','A','R','D','I','K','\0'};
    printf("%s\n", str);
    // Method to calculate the length of a string
    int strLen = strlen(str);
    // printing the address of the elments of the string
    for (int i = 0; i < strLen; i++) {
        printf("The address of the elements of the string is: %u\n", &str[i]);
    }

    // METHOD 2 TO CREATE A STRING AND PRINT IT
    char string[] = "HARDIK";
    char *ptr = str;

    for (*ptr; *ptr != '\0'; ++ptr)
    {
        printf("%c", *ptr);
    }

    // METHOD 3 TO CREATE A STRING AND PRINT IT
    char *stringPTR = "HARDIK";
    printf("\n%s\n", stringPTR);

    return 0;
}

/*
!NOTE: /0 => Null Character
The null character is used to indicate the termination of a string
However, if use do not use the first method to create a string then C compiler automatically adds the null character.

* strlen(string) returns the length of the string

*/
