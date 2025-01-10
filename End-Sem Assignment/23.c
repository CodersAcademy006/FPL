#include <stdio.h>

struct Record {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Record records[100];
    int n;

    // Input number of records
    printf("Enter the number of records: ");
    scanf("%d", &n);

    // Input details for each record
    for (int i = 0; i < n; i++) {
        printf("Enter details for record %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("Age: ");
        scanf("%d", &records[i].age);
        printf("Salary: ");
        scanf("%f", &records[i].salary);
    }

    // Display the records
    printf("\nStored Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Record %d: Name: %s, Age: %d, Salary: %.2f\n", i + 1, records[i].name, records[i].age, records[i].salary);
    }

    return 0;
}
