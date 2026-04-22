# Function List — Monthly Budget Calculator

## get_number(prompt)
**Purpose:**  
Get a numeric, non‑negative value from the user.

**Inputs:**  
- prompt (string)

**Outputs:**  
- Valid number (float)

**Description:**  
Displays a prompt, receives input, and validates that it is numeric and ≥ 0. Repeats until valid.


## get_expenses()
**Purpose:**  
Collect all monthly expense values.

**Inputs:**  
None

**Outputs:**  
- A list or dictionary of expense values

**Description:**  
Prompts the user for each expense category (rent, food, gas, utilities, childcare, misc). Uses get_number() for validation.


## calculate_totals(income, expenses)
**Purpose:**  
Calculate total expenses and remaining balance.

**Inputs:**  
- income (float)  
- expenses (list or dictionary)

**Outputs:**  
- totalExpenses (float)  
- remaining (float)

**Description:**  
Adds all expenses and subtracts from income.


## determine_status(remaining)
**Purpose:**  
Determine if the user is over or under budget.

**Inputs:**  
- remaining (float)

**Outputs:**  
- "Over Budget" or "Under Budget"

**Description:**  
If remaining < 0 → over budget. Otherwise → under budget.


## display_results(income, totalExpenses, remaining, status)
**Purpose:**  
Display the final budget summary.

**Inputs:**  
- income  
- totalExpenses  
- remaining  
- status

**Outputs:**  
None

**Description:**  
Prints all results in a clean, readable format.


## ask_repeat()
**Purpose:**  
Ask the user if they want to run another calculation.

**Inputs:**  
None

**Outputs:**  
- "yes" or "no"

**Description:**  
Validates user input and returns the choice.


## main()
**Purpose:**  
Control the full program flow.

**Inputs:**  
None

**Outputs:**  
None

**Description:**  
Runs the loop, calls all other functions, and manages the entire program.
