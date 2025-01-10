#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee employees[100];
    int n;

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee details
    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n", i + 1, employees[i].name, employees[i].id, employees[i].salary);
    }

    return 0;
}
