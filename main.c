#include <stdio.h>
#include <string.h>

// Function to safely get a positive number
float getNumber(char promt[]) {
  float value;
  int valid;

  do {
      Printf("%s", &value);

  if (valid != 1 || value < 0) {
      Printf("Invalid entry. Please enter a positive number. \n");
      while (getchar() != '\n'); // clear input buffer
      valid = 0;
    }
  } while (!valid);

  return value;
}

int main() {

    // Budget to help manage funds during the month
    printf("Welcome to the Monthly Budget Calculator\n");

    char repeatProgram[5] = "yes";

    while (strcmp(repeatProgram, "yes") == 0) {

  // ---INPUT EXPENSES ---
  // List of expenses for month, enter estimated amount to spend rounding up.
  float rent = getNumber("Enter rent amount: ");
  float food = getNumber("Enter food amount: ");
  float gas = getNumber("Enter gas amount: ");
  float utilities - getNumber("Enter utilities amount: ");
  float childcare = getNumber("Enter childcare amount: ");
  float misc = getNumber("Enter miscellaneous expenses: ");

  // ---DETERMINE STATUS ---
  // Is the total positive or negative for the month?
  char status[20];
  if (remaining < 0) {
    strcpy(status, "Over Budget");
  } else {
      strcpy(status, "Under Budget");
  }

  // ---REPEAT OPTION ---
  // List all items for review
  printf("\n--- Monthly Budget Summary ---\n");
  printf("Total Income: %.2f\n", income);
  printf("Total Expenses: %.2f\n", totalExpenses);
  printf("Status: %s\n", status);

  // --- REPEAT OPTION ---
  // Does user want to calculate another month?
  printf("\nDo you want to calculate another month? (yes/no): ");
  scanf("5s", repeatProfram);

  // Validate yes/no
  while (strcmp(repeatProgram, "yes") != 0 && strcmp(repeatProgram, "no") !=
    printf("Invalid choice. Enter yes or no: ");
    scanf("%s", repeatProgram);
  }

    printf("\n");
}

  printf("Thank you for using the Monthly Budget Calculator.\n");

  return 0;
}

    
