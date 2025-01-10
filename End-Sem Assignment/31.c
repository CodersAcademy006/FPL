#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *file = fopen("employee.dat", "rb+");  // Open the file for both reading and writing in binary mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    Employee emp;
    int recordToUpdate = 2;  // We want to update the 3rd employee (index 2)
    fseek(file, recordToUpdate * sizeof(Employee), SEEK_SET);  // Move the file pointer to the 3rd employee record
    
    // Read the current employee record
    fread(&emp, sizeof(Employee), 1, file);
    printf("Before Update: ID = %d, Name = %s, Salary = %.2f\n", emp.id, emp.name, emp.salary);
    
    // Modify the salary
    emp.salary = 55000.00;
    
    // Write back the updated record
    fseek(file, -sizeof(Employee), SEEK_CUR);  // Move file pointer back to the position of the record
    fwrite(&emp, sizeof(Employee), 1, file);

    // Rewind to the beginning and print all records
    rewind(file);
    printf("\nAll Employee Records After Update:\n");
    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("ID = %d, Name = %s, Salary = %.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
    return 0;
}
