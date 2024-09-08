#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name, employeeID, pfNo, designation, esiNo, department, bankName, bankAccount;
    int totalWorkingDays, paidDays, lopDays, leavesTaken;
    double basicWage, hra, conveyanceAllowance, medicalAllowance,tds, otherAllowance, totalEarnings, totalDeductions, netSalary, epf, pt, esi;
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    getline(cin, employeeID);
    cout << "Enter PF No: ";
    getline(cin, pfNo);

    cout << "Enter basic Wages: ";
    cin >> basicWage;
    cout << "Enter Conveyance Allowance: ";
    cin >> conveyanceAllowance;

    hra = 0.1*basicWage;
    totalEarnings = basicWage + hra + conveyanceAllowance + medicalAllowance + otherAllowance;
    double professionalTax = 0.05 * totalEarnings;
    totalDeductions = professionalTax + epf + pt + tds + esi;
    netSalary = totalEarnings - totalDeductions;

    cout << "\n\n";
    cout << "COMPANY NAME: XYZ\n";
    cout << "Address of the Company: \n";
    cout << "Pay slip for july 2022\n";
    cout << "Name of the Employee: " << name << "\t\t\tUAN: \n";
    cout << "Employee ID: " << employeeID <<  "\t\t\tPF No: " << pfNo << "\n";
    cout <<"\nTotal Working Days: " << totalWorkingDays << "\t\t\tPaid Days: " << paidDays << endl;
    cout << "LOP Days: " << lopDays << "\t\t\t\tLeaves Taken: " << leavesTaken << endl;
    cout << "Basic Wages: " << basicWage << "\t\t\t\t\tProfessinal Tax: " << professionalTax << endl;
    cout << "Total Earning: " << totalEarnings << "\t\t\tTotal Deductions: " << totalDeductions << endl;
    cout << "\nNet Salary: " << netSalary << endl;
    cout << "\nEmployer Signature\t\t\t\t\tEmployee Signature\n";
    return 0;

   
}