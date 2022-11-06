#include <stdio.h> 
#include <string.h> 

int str_len(char *str) {
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

void slice(char *st, int m, int n) {
    int i = 0;
    while ((m+i) < n) {
        st[i] = st[i + m];
        i++;
    }
    st[i] = '\0';
}

void str_copy(char *target, char *src) {
    int i = 0;
    while (i <= strlen(target)) {
        target[i] = src[i];
        i++;
    }
    target[i] = '\0';
}

void encrypt(char *c) {
    char *ptr = c;
    while (*ptr!='\0') {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}

int occurence(char string[], char *c) {
    char *ptr = string;
    int count = 0;
    while (*ptr!='\0') {
        if(*ptr == c) {
            count++;
        }
        ptr++;
    }
    return count;
}

void check_for_presence(char *word, char *c) {
    int flag = 0;
    for (int i = 0; i < strlen(word); i++) 
    {
        if (word[i] == c) {
            flag = 1;
        }
    }
    if(flag) {
        printf("The given character occured in the string.\n");
    } else {
        printf("The given character did not occur in the string.\n");
    }
}

int main() {
    // ? Exercise 1 - Write your own version of strlen() function.
    char str[] = "Hello";
    int len = str_len(str);
    printf("The length of the string is %d\n", len);

    // ? Exercise 2 - Write a function slice() to slice a string. It should change the original string such taht it is now that sliced string. Take m and n as the starting and ending position for slice.

    char st[] = "Hardik";
    slice(st, 0, 4);
    printf("%s\n", st);

    // ? Exercise 3 - Write your own strcpy() function.
    char source[] = "Hacker";
    char target[30];
    str_copy(target, source);
    printf("%s\n", target);

    // ? Exercise 4 - Write a program to encrypt a string by adding 1 to the ascii value of its characters.

    char c[] = "hardik";
    encrypt(c);
    printf("%s\n", c);

    // ? Exercise 5 - Write a program to count the occurence of a given character in a string.
    char string[] = "harry";
    int count = occurence(string, 'h');
    printf("Occurences = %d\n", count);

    // ? Exercise 6 - Write a program to check whether a given character is present in a string or not.
    char word[] = "harry";
    check_for_presence(word, 'y');

    return 0;
}