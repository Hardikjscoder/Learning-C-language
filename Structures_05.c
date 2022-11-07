#include <stdio.h> 
#include <string.h> 

struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
};

int main() {
    struct EmployeesInfo e1;
    struct EmployeesInfo *ptr;

    ptr = &e1;
    (*ptr).salary = 1200;
    strcpy((*ptr).name, "Hardik Rana");
    (*ptr).experience = 12;

    // OR

    strcpy(ptr->name, "Hardik Rana");
    ptr->salary = 1200;
    ptr->experience = 12;

    // -> = Arrow operator

    printf("The name of the employee is : %s\n", e1.name);
    printf("The salary of the employee is : %.0f\n", e1.salary);
    printf("The experience of the employee is : %d\n", e1.experience);

    return 0;
}