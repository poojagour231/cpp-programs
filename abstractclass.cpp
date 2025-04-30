// Write an abstract class Employee with pure virtual functions calculateSalary() and 
//displayDetails(). Implement derived classes Manager and Engineer


#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Employee {
protected:
    string name;
    int id;
    double baseSalary;

public:
    Employee(string n, int i, double salary) : name(n), id(i), baseSalary(salary) {}

    // Pure virtual functions
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;
};

// Derived class: Manager
class Manager : public Employee {
public:
    Manager(string n, int i, double salary) : Employee(n, i, salary) {}

    void calculateSalary() override {
        double bonus = 0.2 * baseSalary; // 20% bonus
        cout << "Manager Salary: ₹" << baseSalary + bonus << endl;
    }

    void displayDetails() override {
        cout << "Manager Details " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class: Engineer
class Engineer : public Employee {
public:
    Engineer(string n, int i, double salary) : Employee(n, i, salary) {}

    void calculateSalary() override {
        double allowance = 0.1 * baseSalary; // 10% allowance
        cout << "Engineer Salary: ₹" << baseSalary + allowance << endl;
    }

    void displayDetails() override {
        cout << " Engineer Details " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Employee* emp;

    Manager m("Pooja", 101, 50000);
    Engineer e("Rani", 102, 40000);

    emp = &m;
    emp->displayDetails();
    emp->calculateSalary();

    emp = &e;
    emp->displayDetails();
    emp->calculateSalary();

    return 0;
}
