#include <stdio.h> 
#include <string.h>

// Creating a structure
struct employee {
    int id;
    float salary;
    char name[10];
}; // ---> semicolon is important

int main() {
    // Creating a structure variable
    struct employee e1;
    e1.id = 5230264;
    e1.salary = 50000.0;
    strcpy(e1.name, "Hardik Rana");

    printf("The name of the employee is %s\n", e1.name);
    printf("The id of the employee is %d\n", e1.id);
    printf("The salary of the employee is %.2f Rs.\n", e1.salary);

    return 0;
}

/*

What are structures?
- Arrays and strings hold similar data (int, float, char) but structures hold dissimilar data.

?SYNTAX: 

A structure can be created as follows:

struct employee {
- int code;
-float salary; => This declares a new user defined data-type!
- char name[10];
}

!NOTE: A structure is similar to a class because both are user-defined data types and both hold a bunch of different data types. 

'.' => member operator (e1.id)

*/