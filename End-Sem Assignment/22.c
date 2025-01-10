#include <stdio.h>
#include <string.h>

struct MenuItem {
    char name[50];
    float price;
    int quantity;
};

void displayMenu(struct MenuItem menu[], int size) {
    printf("\nFood Menu:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}

void placeOrder(struct MenuItem menu[], int size) {
    int choice, quantity;
    float total = 0;

    printf("\nPlace your order (Enter 0 to finish):\n");
    while (1) {
        printf("Enter item number: ");
        scanf("%d", &choice);
        if (choice == 0) break;

        if (choice > 0 && choice <= size) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            total += menu[choice - 1].price * quantity;
            printf("Added %d x %s to your order.\n", quantity, menu[choice - 1].name);
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    printf("Total Bill: $%.2f\n", total);
}

int main() {
    struct MenuItem menu[] = {
        {"Burger", 5.99, 0},
        {"Pizza", 8.99, 0},
        {"Pasta", 6.49, 0},
        {"Fries", 2.99, 0}
    };

    int size = sizeof(menu) / sizeof(menu[0]);

    displayMenu(menu, size);
    placeOrder(menu, size);

    return 0;
}
