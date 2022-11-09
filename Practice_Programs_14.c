#include <stdio.h> 
#include <string.h> 

int main() {
    // ? Q14 - Write a program to reverse a string wihtout strrev() function/method
    char str[] = "hardik";
    printf("Original string : %s\n", str);

    int length = strlen(str); // calculate the length of the string

    char temp;

    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reveresd string : %s", str);

    return 0;
}