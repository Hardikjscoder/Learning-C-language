#include <stdio.h> 
#include <string.h> 

typedef struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
} emp;

int main() {
    // Another method to create/intialize the structure variable
    emp employee1 = {"Harry Bhai", 45000, 2};

    printf("The name of the employee is %s, his/her salary is %.2f and he/she has %d years of experience in the company\n", employee1.name, employee1.salary, employee1.experience);

    return 0;
}

/*

What is the 'typedef' keyword?
- We can use the typedef keyword to create an alias name for the data types in C. typedef is more commonly used with structures. 

*/