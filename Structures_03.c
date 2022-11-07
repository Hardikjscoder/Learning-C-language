#include <stdio.h> 
#include <string.h> 

struct EmployeesInfo {
    char name[20];
    float salary;
    int experience;
};

int main() {
    struct EmployeesInfo facebook[5]; // => An array of strutures
    strcpy(facebook[0].name, "Hardik Rana");
    facebook[0].salary = 12000000;
    facebook[0].experience = 5;

    strcpy(facebook[1].name, "Ansh Saini");
    facebook[1].salary = 24000000;
    facebook[1].experience = 10;

    strcpy(facebook[2].name, "Piyush Mandhotra");
    facebook[2].salary = 25000000;
    facebook[2].experience = 11;

    printf("The name of the employee 1 is %s\n", facebook[0].name);
    printf("The name of the employee 2 is %s\n", facebook[1].name);
    printf("The name of the employee 3 is %s\n", facebook[2].name);

    printf("\n");

    printf("The salary of the employee 1 is %.2f\n", facebook[0].salary);
    printf("The salary of the employee 2 is %.2f\n", facebook[1].salary);
    printf("The salary of the employee 3 is %.2f\n", facebook[2].salary);

    printf("\n");

    printf("The experience of the employee 1 is %d\n", facebook[0].experience);
    printf("The experience of the employee 2 is %d\n", facebook[1].experience);
    printf("The experience of the employee 3 is %d\n", facebook[2].experience);

    return 0;
}

/* 

Why use structures?
- We can create the data types in the employee structure seperately but when the number of properties in a structure increases, it becomes difficult for us to create data variables without structures. In a nut shell : 
(a)  Structures keep the data organized.
(b) Structures make the data management easy for the programmer.

*/