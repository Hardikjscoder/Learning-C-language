#include <stdio.h>

int main() {
    // Exercise 1 - Write a program to check whether a number is divisible by 97 or not
    int number;
    printf("Enter a number \n");
    scanf("%d", &number);

    // Since we have not studied about if else conditionals, we will have to rely on the user to understand the answer. It is by if the remainder after dividing comes 0 then the number is divisible by 97 else it is not divisible by 97.
    printf("Divisibility test returns: %d \n", number % 97);

    // Exercise 2 - Explain step by step evaluation of 3 * x / y - z + k where x = 2, y = 3, z = 3 and k = 1

    // Here we will have to operator associativity as we have two operators of highest precedence
    int x = 2, y = 3, z = 3, k = 1;
    printf("The answer is %d\n", 3 * x / y - z + k);
    /*
        Evaluation =>
        => 3 * 2 / 3 - 3 + 1
        => 6 / 3 - 3 + 1
        => 2 - 3 + 1
        => -1 + 1 
        => 0
    */

    return 0;
}