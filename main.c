#include <stdio.h>
#include <string.h>

// Function to safely get a positive number
float getNumber(char prompt[]) {
    float value;
    int valid;

    do {
        printf("%s", prompt);
        valid = scanf("%f", &value);

        if (valid != 1 || value < 0) {
            printf("Invalid entry. Please enter a positive number.\n");
            while (getchar() != '\n'); // clear input buffer
            valid = 0;
        }
    } while (!valid);

    return value;
}

int main() {

    printf("Welcome to the Monthly Budget Calculator\n");

    char repeatProgram[5] = "yes";

    while (strcmp(repeatProgram, "yes") == 0) {

        // --- INPUT ---
        float income = getNumber("Enter total monthly income: ");
        float rent = getNumber("Enter rent amount: ");
        float food = getNumber("Enter food amount: ");
        float gas = getNumber("Enter gas amount: ");
        float utilities = getNumber("Enter utilities amount: ");
        float childcare = getNumber("Enter childcare amount: ");
        float misc = getNumber("Enter miscellaneous expenses: ");

        // --- CALCULATIONS ---
        float totalExpenses = rent + food + gas + utilities + childcare + misc;
        float remaining = income - totalExpenses;

        // --- STATUS ---
        char status[20];
        if (remaining < 0) {
            strcpy(status, "Over Budget");
        } else {
            strcpy(status, "Under Budget");
        }

        // --- OUTPUT ---
        printf("\n--- Monthly Budget Summary ---\n");
        printf("Total Income: %.2f\n", income);
        printf("Total Expenses: %.2f\n", totalExpenses);
        printf("Remaining: %.2f\n", remaining);
        printf("Status: %s\n", status);

        // --- REPEAT OPTION ---
        printf("\nDo you want to calculate another month? (yes/no): ");
        scanf("%4s", repeatProgram);

        while (strcmp(repeatProgram, "yes") != 0 &&
               strcmp(repeatProgram, "no") != 0) {
            printf("Invalid choice. Enter yes or no: ");
            scanf("%4s", repeatProgram);
        }
    }

    printf("\nThank you for using the Monthly Budget Calculator.\n");

    return 0;
}


    
