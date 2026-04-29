#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;
    const int employeeId;

public:
    // Constructor (initialize const member using initializer list)
    Employee(int id) : employeeId(id)
    {
        count++;
    }

    // Destructor
    ~Employee()
    {
    }

    // Static function to get count
    static int getCount()
    {
        return count;
    }

    // Const function to get employee ID
    int getEmployeeId() const
    {
        return employeeId;
    }
};

// Static member definition
int Employee::count = 0;

int main()
{
    Employee e1(10);
    Employee e2(20);
    Employee e3(30);
    const Employee e4(40);

    cout << "Employee ID e1: " << e1.getEmployeeId() << endl;
    cout << "Employee ID e2: " << e2.getEmployeeId() << endl;
    cout << "Employee ID e3: " << e3.getEmployeeId() << endl;
    cout << "Employee ID e4: " << e4.getEmployeeId() << endl;

    cout << "Total Employees: " << Employee::getCount() << endl;

    return 0;
}