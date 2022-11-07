// Functions and Structures
#include <stdio.h> 
#include <string.h> 

struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
};

void display(struct EmployeesInfo employee);

int main() {
    struct EmployeesInfo employee = {"Hardik", 100000, 2};

    display(employee);

    return 0;
}

void display(struct EmployeesInfo employee) {
    printf("The name of the employee is %s\n", employee.name);
    printf("The salary of the employee is %.2f\n", employee.salary);
    printf("The experience of the employee is %d\n", employee.experience);
}