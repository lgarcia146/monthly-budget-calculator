# monthly-budget-calculator
A simple monthly budget calculator for my COP1220 course
A C program that calculates total monthly expenses, remaining balance, and budget status (under, over, or balanced). This project demonstrates modular programming, input validation, arithmetic operations, and documentation best practices.

Project Overview
This program allows the user to enter income and expenses for the month. It then calculates totals and determines whether the user is within their budget.

How to Run
gcc budget.c -o budget
./budget

Input Format
The program prompts the user for:

Monthly income

Housing cost

Utilities

Groceries

Transportation

Personal/other expenses

All inputs must be numeric.

Output Format
The program displays:

Total expenses

Remaining balance

Budget status

UNDER budget

OVER budget

BALANCED

Example Usage
Sample Input

Enter monthly income: 3000
Enter housing cost: 1200
Enter utilities: 250
Enter groceries: 400
Enter transportation: 300
Enter personal/other expenses: 200
Sample Output

Total expenses: 2350
Remaining balance: 650
You are UNDER budget this month.

Requirements
GCC compiler

Linux, macOS, or Windows with WSL

Terminal access

Known Limitations
No data storage between runs

Assumes all values are monthly

Single-user only

No graphical interface
