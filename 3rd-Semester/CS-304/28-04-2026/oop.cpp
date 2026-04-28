/*

*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;
    double employeeSalary;

public:
    // Default Constructor
    Employee()
    {
        employeeId = 0;
        employeeName = "";
        employeeSalary = 0.0;
    }

    // Parameterized Constructor
    Employee(int empId, string empName, double empSalary)
    {
        setEmployeeId(empId);
        setEmployeeName(empName);
        setEmployeeSalary(empSalary);
    }

    // Deep Copy Constructor
    Employee(const Employee &temp)
    {
        this->employeeId = temp.employeeId;
        this->employeeName = temp.employeeName;
        this->employeeSalary = temp.employeeSalary;
    }

    // Destructor
    ~Employee()
    {
        cout << "Destructor called for: " << employeeName << endl;
    }

    // ── Setters ──────────────────────────────
    void setEmployeeId(int employeeId)
    {
        this->employeeId = employeeId;
    }

    void setEmployeeName(string employeeName)
    {
        this->employeeName = employeeName;
    }

    void setEmployeeSalary(double employeeSalary)
    {
        this->employeeSalary = employeeSalary;
    }

    // ── Getters ──────────────────────────────
    int getEmployeeId()
    {
        return employeeId;
    }

    string getEmployeeName()
    {
        return employeeName;
    }

    double getEmployeeSalary()
    {
        return employeeSalary;
    }

    // ── Display ──────────────────────────────
    void display()
    {
        cout << "Employee ID     : " << this->employeeId << endl;
        cout << "Employee Name   : " << this->employeeName << endl;
        cout << "Employee Salary : " << this->employeeSalary << endl;
    }
};

int main()
{
    // Parameterized constructor
    Employee emp1(10, "xyz", 50000);

    // Deep copy constructor — copies emp1 into emp2
    Employee emp2 = emp1;

    cout << "Data members of emp1:" << endl;
    emp1.display();

    cout << "\nData members of emp2:" << endl;
    emp2.display();

    return 0;
}