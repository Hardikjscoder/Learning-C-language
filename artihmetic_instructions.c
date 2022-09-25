#include <stdio.h>
#include <math.h> // We need math.h to use pow() function

int main() {
    int a = 40;
    int b = 5;
    printf("The value of a + b is %d \n", a + b);
    printf("The value of a - b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of a / b is %d \n", a / b);
    printf("When a is divided by b, it leaves remainder %d \n", a % b);
    
    // In C, there is no operator to do exponentiation
    // printf("5 to the power of 2 is %f", 5^2) this won't work as '^' is XOR operator in C

    // However, we have a method to do exponentiation that is pow() function
    // NOTE : It takes double as parameter and returns double
    printf("5 to the power 2 is %f", pow(5, 2));

    // TYPE CONVERSION 
    /*
      INT AND INT => INT
      INT AND FLOAT => FLOAT
      FLOAT AND FLOAT => FLOAT
     */

    return 0;
}