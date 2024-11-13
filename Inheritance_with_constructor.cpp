// Inheritance with constructor
// 1) Function overloading and function overriding.

// Function Overloading ->
// 1) In function overloading it occur without inheritance.
// 2) In function overloading must have different signature of function.
// 3) In it we  declare more than one function with same name and different types of parameters.
// 4) It is a 9999concept of compile time.

// #include <iostream>
// using namespace std;

// class Account {
// public:
//     double calculateBalance(double initialAmount) {
//         return initialAmount;
//     }

//     double calculateBalance(double initialAmount, double deposit) {
//         return initialAmount + deposit;
//     }

//     double calculateBalance(double initialAmount, double deposit, double withdrawal) {
//         return initialAmount + deposit - withdrawal;
//     }
// };

// int main() {
//     Account myAccount;

//     cout << "Balance with no transactions: ₹" << myAccount.calculateBalance(10000) << endl;
//     cout << "Balance after deposit: ₹" << myAccount.calculateBalance(10000, 2000) << endl;
//     cout << "Balance after deposit and withdrawal: ₹" << myAccount.calculateBalance(10000, 2000, 1500) << endl;

//     return 0;
// }

// Function Overriding ->
// 1) It can occur when one class is inherit from another class.
// 2) In function overriding must have same signature of function.
// 3) Here we declare a function in base class and derived class with the same name and same parameters.
// 4) It is a concept of run time.

// Overriding

// #include <iostream>
// using namespace std;

// class Account {
// public:
//     virtual double calculateInterest(double amount) {
//         return amount * 0.03;
//     }
// };

// class SavingsAccount : public Account {
// public:
//     double calculateInterest(double amount) override {
//         return amount * 0.05;
//     }
// };

// int main() {
//     Account* acc1 = new Account();
//     Account* acc2 = new SavingsAccount();

//     cout << "Interest for Account: ₹" << acc1->calculateInterest(10000) << endl;
//     cout << "Interest for SavingsAccount: ₹" << acc2->calculateInterest(10000) << endl;

//     delete acc1;
//     delete acc2;
//     return 0;
// }

// QUESTION ->
// Problem Statement: Design a class hierarchy to represent different types of employees in a company. You will create a base class called Employee and two derived classes: FullTimeEmployee and PartTimeEmployee. Each employee has a name and a method to calculate their salary. Base Class: Employee Attributes: string name Methods: Employee(string name): Constructor to initialize the employee's name. virtual double calculateSalary(): A virtual method that returns the salary (default implementation returns 0). Derived Class: FullTimeEmployee Attributes: double monthlySalary Methods: FullTimeEmployee(string name, double monthlySalary): Constructor to initialize the name and monthly salary. double calculateSalary() override: Override the base class method to return the monthly salary. Derived Class: PartTimeEmployee Attributes: double hourlyWage int hoursWorked Methods: PartTimeEmployee(string name, double hourlyWage, int hoursWorked): Constructor to initialize the name, hourly wage, and hours worked. double calculateSalary() override: Override the base class method to return the total salary based on hours worked. Instructions: Implement the classes as described above. In the main() function, create one full-time employee and one part-time employee. Output their names and calculated salaries using the calculateSalary() method.
