# Rebecca Wanjiru - OOP 1 Assignments

This folder contains the completed programming assignments from the supplied
OOP 1 weekly assignment PDF through Week 6, together with the three C
function questions supplied as images.

## Student details

- Name: Rebecca Wanjiru
- Admission number: CT101/G/26586/25
- Course: Bachelors of Science in Computer Science
- Year: 2.1
- University: Kirinyaga University
- Unit: Object Oriented Programming

## Contents

| Folder | Programs |
| --- | --- |
| `week1` | Mobile phone sales receipt; driving test result |
| `week2` | Grading system; admission decision; simple calculator |
| `week3` | Payroll functions; water billing functions |
| `week4` | Employee bonus for loop; savings withdrawal while loop; password verification do-while loop |
| `week5` | Hotel management system using 1D, 2D, and 3D arrays |
| `week6` | Library book management; student fee management using classes and objects |
| `image_assignments` | Discount calculator; electricity bill; employee salary |

Each source file is a separate program and contains comments describing the
main steps. The Week 3 handout does not provide an overtime rate or water rate,
so those values are visible constants in the relevant programs and can be
changed easily:

- Overtime rate: KSh 500 per hour
- Water rate: KSh 50 per unit

The repository also includes a GitHub Actions workflow that compiles every
C++ file with C++17 and every C file with C11 using warnings enabled.

## Local verification

All 16 programs were compiled locally on Windows with GCC 16.2.0 using
`-Wall -Wextra -pedantic`, with no compiler warnings or errors. Each program
was then run with representative input. Boundary and error checks also passed
for the discount, electricity, and tax slabs, division by zero, underage
admission, grade E, zero discount, insufficient-balance, zero-copy borrowing,
invalid fee payment, and deterministic array-count cases.

## Compiling and running

For a C++ file, use a C++17 compiler:

```text
g++ -std=c++17 -Wall -Wextra -pedantic week1/mobile_sales_receipt.cpp -o mobile_sales_receipt
./mobile_sales_receipt
```

For a C file, use a C11 compiler:

```text
gcc -std=c11 -Wall -Wextra -pedantic image_assignments/discount_calculator.c -o discount_calculator
./discount_calculator
```

On Windows, run the generated program as `mobile_sales_receipt.exe` or
`discount_calculator.exe`.
