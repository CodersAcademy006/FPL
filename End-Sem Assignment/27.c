#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n;

    // Input number of contacts
    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for (int i = 0; i < n; i++) {
        printf("Enter details for contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].name);
        printf("Phone Number: ");
        scanf("%s", contacts[i].phone);
    }

    // Display contact list
    printf("\nContact List:\n");
    for (int i = 0; i < n; i++) {
        printf("Contact %d: Name: %s, Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }

    return 0;
}
