#include "Employee.h"

int main() {
    FullTimeEmployee ft(50000);
    PartTimeEmployee pt(20, 100);

    cout << "Full-Time Employee Salary: $" << ft.calculateSalary() << endl;
    cout << "Part-Time Employee Salary: $" << pt.calculateSalary() << endl;

    return 0;
}