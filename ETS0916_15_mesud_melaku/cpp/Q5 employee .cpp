#include <iostream>

using namespace std;

int main() {
    string employeeName;
    int weeklyWorkingHours;
    double bonusRatePerHour;
    double baseSalary;

    cout << "Enter employee name: ";
    cin >> employeeName;
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    double totalWeeklySalary = (weeklyWorkingHours * baseSalary) + (bonusRatePerHour * weeklyWorkingHours);
    double bonusPayment = bonusRatePerHour * weeklyWorkingHours;
    double grossSalary = totalWeeklySalary * 4;  // Assuming 4 weeks in a month
    double pensionDeduction = grossSalary * 0.05;
    double taxDeduction = grossSalary * 0.15;
    double netSalary = grossSalary - (pensionDeduction + taxDeduction);

    cout << "Employee Name: " << employeeName << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}


