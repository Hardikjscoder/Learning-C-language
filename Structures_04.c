#include <stdio.h> 
#include <string.h> 

struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
};

int main() {
    // Another method to create/intialize the structure variable
    struct EmployeesInfo employee1 = {"Harry Bhai", 45000, 2};

    printf("The name of the employee is %s, his/her salary is %.2f and he/she has %d years of experience in the company\n", employee1.name, employee1.salary, employee1.experience);

    return 0;
}