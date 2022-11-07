#include <stdio.h> 
#include <string.h> 

struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
    int id;
};


int main() {
    // ? Write a program to store the information of 3 employees.

    struct EmployeesInfo employee_01;
    strcpy(employee_01.name, "Rohan");
    employee_01.salary = 120000.00;
    employee_01.experience = 5;
    employee_01.id = 50;

    struct EmployeesInfo employee_02;
    strcpy(employee_02.name, "Mohan");
    employee_02.salary = 500000.00;
    employee_02.experience = 15;
    employee_02.id = 10;

    struct EmployeesInfo employee_03;
    strcpy(employee_03.name, "Joginder");
    employee_03.salary = 1200000.00;
    employee_03.experience = 35;
    employee_03.id = 1;

    printf("The name of the employee 1 is %s\n", employee_01.name);
    printf("The salary of the employee 1 is %.2f Rs.\n", employee_01.salary);
    printf("The experience of the employee 1 is %d years\n", employee_01.experience);
    printf("The id of the employee 1 is %d\n", employee_01.id);

    printf("\n");
    printf("\n");

    printf("The name of the employee 2 is %s\n", employee_02.name);
    printf("The salary of the employee 2 is %.2f Rs.\n", employee_02.salary);
    printf("The experience of the employee 2 is %d years\n", employee_02.experience);
    printf("The id of the employee 2 is %d\n", employee_02.id);

    printf("\n");
    printf("\n");

    printf("The name of the employee 3 is %s\n", employee_03.name);
    printf("The salary of the employee 3 is %.2f Rs.\n", employee_03.salary);
    printf("The experience of the employee 3 is %d years\n", employee_03.experience);
    printf("The id of the employee 3 is %d\n", employee_03.id);

    return 0;
}