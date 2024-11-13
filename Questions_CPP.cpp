// Create a class BankAccount that tracks the total number of accounts created. Implement the following:

// 1. A static member variable totalAccounts that keeps track of the number of accounts.

// 2. A static member function getTotalAccounts() that returns the current number of accounts.

// 3. A constructor that increments totalAccounts when a new account is created.

// 4. A destructor that decrements totalAccounts when an account is deleted.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     static int totalAccounts;

// public:
//     BankAccount()
//     {
//         totalAccounts++;
//     }

//     ~BankAccount()
//     {
//         totalAccounts--;
//     }

//     static int getTotalAccounts()
//     {
//         return totalAccounts;
//     }
// };

// int BankAccount::totalAccounts = 0;

// int main()
// {
//     cout << "Total accounts: " << BankAccount::getTotalAccounts() << endl;

//     BankAccount account1;
//     BankAccount account2;
//     cout << "Total accounts after creating 2 accounts: " << BankAccount::getTotalAccounts() << endl;

//     {
//         BankAccount account3;
//         cout << "Total accounts inside a block after creating another account: " << BankAccount::getTotalAccounts() << endl;
//     }

//     cout << "Total accounts after exiting the block: " << BankAccount::getTotalAccounts() << endl;

//     return 0;
// }





// #include <iostream>
// class Counter {
// public:

//     static int count;

//     static void incrementCount() {
//         ++count;
//     }

//     static int getCount() {
//         return count;
//     }
// };


// int Counter::count = 0;

// int main() {
   
//     std::cout << "Initial count: " << Counter::getCount() << std::endl;   
//     Counter::incrementCount();
//     Counter::incrementCount();
//     Counter::incrementCount();
//     Counter::incrementCount();
//     std::cout << "Count after incrementing Four: " << Counter::getCount() << std::endl;
//     Counter::incrementCount();
//     Counter::incrementCount();
//     std::cout << "Count after incrementing twice: " << Counter::getCount() << std::endl;
//     Counter::incrementCount();
//     Counter::incrementCount();

//     return 0;
// }





// Implement a class MathOperations with a static member function add(int a, int b) that returns the sum of a and b.
// Also, implement a static member function subtract(int a, int b) that returns the difference between a and b. 
// Demonstrate these functions in main()

// #include <iostream>

// class MathOperations {
// public:
//     static int avg(int a, int b, int c) {
//         return (a + b + c) / 3;
//     }
// };

// int main() {
//     int average = MathOperations::avg(2, 3, 4);
//     std::cout << "Average is: " << average << std::endl;

//     return 0;
// }





// Imagineyou are developing a system to manage a collection of movie objects for a film library. Each movie object needs to store information about its title, director, and release year.





// Lamborghini is an international luxury sports car developer stationed in Italy. The company has a reputation for
// producing cars that are extremely expensive, powerful and rare. Lamborghini has developed a brand new model called
// the Diablo. The company produces a very limited number of Diablo’s each year. The company is producing the Diablo
// in only one colour called the “Hot Red”.
// When the company has produced a Diablo, the car has a number of attributes like colour, cubic capacity, number of
// seats, year of manufacture, engine number, frame number and owner name. Out of these attributes the attributes that
// remain the same for all Diablo’s being produced are colour, cubic capacity and number of seats.
// Suppose you are working on a system specially designed for the Lamborghini Diablo. Follow the instructions below
// for creating the class and objects:
//  Store the owners name as a dynamic array data member.
//  Create an object named “obj1” and initialize the object.
//  Create a copy constructor that can copy all those attributes that remain the same for all cars.
//  Generate another object named “obj2” that is created by copying only those attributes that are the same from
// “obj1”.
//  Initialize the remaining attributes with values of your own.

// #include <iostream>
// #include <cstring>

// using namespace std;

// class LamborghiniDiablo {
// private:
//     static const char* commonColor;
//     static const int commonCubicCapacity;
//     static const int commonNumberOfSeats;
//     char* ownerName;
//     int yearOfManufacture;
//     int engineNumber;
//     int frameNumber;

// public:
//     LamborghiniDiablo(const char* owner, int year, int engine, int frame) {
//         ownerName = new char[strlen(owner) + 1];
//         strcpy(ownerName, owner);
//         yearOfManufacture = year;
//         engineNumber = engine;
//         frameNumber = frame;
//     }

//     LamborghiniDiablo(const LamborghiniDiablo& other) {
//         ownerName = new char[strlen(other.ownerName) + 1];
//         strcpy(ownerName, other.ownerName);
//         yearOfManufacture = other.yearOfManufacture;
//         engineNumber = other.engineNumber;
//         frameNumber = other.frameNumber;
//     }

//     ~LamborghiniDiablo() {
//         delete[] ownerName;
//     }

//     void display() const {
//         cout << "Color: " << commonColor << endl;
//         cout << "Cubic Capacity: " << commonCubicCapacity << endl;
//         cout << "Number of Seats: " << commonNumberOfSeats << endl;
//         cout << "Owner Name: " << ownerName << endl;
//         cout << "Year of Manufacture: " << yearOfManufacture << endl;
//         cout << "Engine Number: " << engineNumber << endl;
//         cout << "Frame Number: " << frameNumber << endl;
//     }
// };

// const char* Lamborghini
// Diablo::commonColor = "Hot Red";
// const int LamborghiniDiablo::commonCubicCapacity = 6500;
// const int LamborghiniDiablo::commonNumberOfSeats = 2;

// int main() {
//     LamborghiniDiablo obj1("Prabhakar Kumar", 2024, 123456, 654321);
//     LamborghiniDiablo obj2 = obj1;

//     cout << "Object 1 details:" << endl;
//     obj1.display();

//     cout << "\nObject 2 details (copied):" << endl;
//     obj2.display();
    
//     return 0;
// }





//Porsche, a prestigious luxury sports car manufacturer from Germany, has just released a new model known as the "918 Spyder". The production of the 918 Spyder is extremely limited each year, and it is available in a single color: “Guards Red”.

//The attributes of each 918 Spyder include color, engine displacement, seating capacity, year of manufacture, serial number, registration number, and owner's name. The attributes that remain unchanged for all 918 Spyders are color, engine displacement, and seating capacity.

//You are assigned to develop a specialized system for managing Porsche 918 Spyder cars. Perform the following tasks:

//Store the owner's name using a dynamic array as a data member.
//Create an object named “spyder1” and initialize it with suitable values.
//Write a copy constructor that copies only the attributes that are consistent across all 918 Spyders.
//Create another object named “spyder2” by copying the invariant attributes from “spyder1”.
//Set the remaining attributes of “spyder2” with your own custom values.

// #include <iostream>
// #include <string>

// using namespace std;

// class Spyder {
// private:
//     string color;
//     int engineDisplacement;
//     int seatingCapacity;
//     int yearOfManufacture;
//     string serialNumber;
//     string registrationNumber;
//     string ownerName;

// public:
//     Spyder(string c, int e, int s, int y, string sN, string rN, string o)
//         : color(c), engineDisplacement(e), seatingCapacity(s), yearOfManufacture(y), serialNumber(sN), registrationNumber(rN), ownerName(o) {}

//     Spyder(const Spyder &other)
//         : color(other.color), engineDisplacement(other.engineDisplacement), seatingCapacity(other.seatingCapacity) {}

//     void display() const {
//         cout << "Color: " << color << "\n"
//              << "Engine Displacement: " << engineDisplacement << "\n"
//              << "Seating Capacity: " << seatingCapacity << "\n"
//              << "Year of Manufacture: " << yearOfManufacture << "\n"
//              << "Serial Number: " << serialNumber << "\n"
//              << "Registration Number: " << registrationNumber << "\n"
//              << "Owner Name: " << ownerName << "\n";
//     }

//     void setRemainingAttributes(int y, string sN, string rN, string o) {
//         yearOfManufacture = y;
//         serialNumber = sN;
//         registrationNumber = rN;
//         ownerName = o;
//     }
// };

// int main() {
//     Spyder spyder1("Guards Red", 4180, 2, 2024, "SN2222", "RN3333", "Prabhakar Kumar");

//     Spyder spyder2 = spyder1;

//     spyder2.setRemainingAttributes(2025, "SN11111", "RN00000", "Prabhakar Kumar Singh");

//     cout << "Details of spyder1:\n";
//     spyder1.display();

//     cout << "\nDetails of spyder2:\n";
//     spyder2.display();

//     return 0;
// }






// Lamborghini's Diablo model is a symbol of luxury and exclusivity, characterized by attributes including color, cubic capacity, number of seats, year of manufacture, engine number, frame number, and owner name. The color, cubic capacity, and number of seats remain the same for all Diablo vehicles.

// For a class implementation handling Lamborghini Diablo data, perform the following:

// Create a class for Lamborghini Diablo that includes a dynamic array for the owner's name.
// Instantiate an object named initialDiablo and assign values to all its attributes.
// Design a copy constructor that copies only the common attributes (color, cubic capacity, number of seats) from initialDiablo to a new object.
// Generate another object called secondaryDiablo by using the copy constructor from initialDiablo, ensuring that only the common attributes are copied. Assign your own values to the remaining attributes of secondaryDiablo.

// #include<iostream>
// using namespace std;
// class lambor{
//     string colour;
//     string name;
//     int engNUM;
//     int frameNUM;
//     int cubicCap;
//     int seats;
//     int YOM;
//     public:
//     lambor(string a,string b,int c,int d,int e,int f,int g){

//         colour=a;
//         name=b;
//         engNUM=c;
//         frameNUM=d;
//         cubicCap=e;
//         seats=f;
//         YOM=g;

//     }
//     void display(){
//         cout<<"colour of car is "<<colour<<endl;
//         cout<<"owner of car is "<<name<<endl;
//         cout<<"enine number of car is "<<engNUM<<endl;
//         cout<<"frame of car is "<<frameNUM<<endl;
//         cout<<"engine number of car is "<<cubicCap<<endl;
//         cout<<"seats of car is "<<seats<<endl;
//         cout<<"year of manyfacturing of car is "<<YOM<<endl;
//     }
//     lambor(lambor&b){
//         colour=b.colour;
//         cubicCap=b.cubicCap;
//         seats=b.seats;
//     }
//     void car(){
//         cout<<"colour is"<<colour<<endl;
//         cout<<"cubic cap is"<<cubicCap<<endl;
//         cout<<"seats is"<<seats<<endl;
    
        


//     }
    
// };
// int main(){
//     lambor diablo("green","saksham",2104,23,24,2,2024);
//     diablo.display();
//     lambor diablo2(diablo);
//     diablo2.display();
// }





// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;
// public:
//     BankAccount(double bal = 0.0) : balance(bal) {}

//     BankAccount operator + (const BankAccount &other) const {
//         return BankAccount(balance + other.balance);
//     }

//     BankAccount operator - (const BankAccount &other) const {
//         return BankAccount(balance - other.balance);
//     }

//     bool operator == (const BankAccount &other) const {
//         return balance == other.balance;
//     }

//     void deposit(double amount) {
//         balance += amount;
//     }

//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//         } else {
//             cout << "Insufficient funds" << endl;
//         }
//     }

//     void display() const {
//         cout << "Balance: Rs" << balance << endl;
//     }
// };

// int main() {
//     BankAccount account1(1000.0);
//     BankAccount account2(500.0);

//     cout << "Initial Balances:" << endl;
//     account1.display();
//     account2.display();

//     BankAccount total = account1 + account2;
//     cout << "\nAfter adding account2 funds to account1:" << endl;
//     total.display();

//     BankAccount withdrawal = account1 - account2;
//     cout << "\nAfter withdrawing account2 funds from account1:" << endl;
//     withdrawal.display();

//     if (account1 == account2) {
//         cout << "\nBoth accounts have the same balance." << endl;
//     } else {
//         cout << "\nAccounts have different balances." << endl;
//     }

//     return 0;
// }





// // How does the overloading equal operator work in the pointer class ansd how is it used to compare two point object.

// #include<iostream>
// using namespace std;

// class pt
// {
//     private:
//         int x,y;
//     public:
//         pt(int a = 0,int b = 0) : x(a),y(b) {}

//         bool operator == (const pt &other) const {return (x == other.x && y == other.y);}
// };

// int main()
// {
//     pt p1(2,2);
//     pt p2(2,2);
//     pt p3(6,9);

//     if (p1==p2)
//     {
//         cout<<"p1 = p2"<<endl;
//     }
//     else
//     {
//         cout<<"p1 != p2"<<endl;
//     }

//     if (p1==p3)
//     {
//         cout<<"p1 = p3"<<endl;
//     }
//     else
//     {
//         cout<<"p1 != p3"<<endl;
//     }
//     return 0;
// }





// how does the string class in the provided code implement and use the [] operator for indexing, and what are the effects of modifying a character in the string using this operator?






// Q.3. Binary to decimal.
// The company has transmitted the data to the target server successfully. Now, on
// the new server, the transmitted binary data has to be stored in a user readable
// format. As a developer, you have been assigned the task of converting the
// received binary data to user-readable decimal data.
// Write a C++ program to convert the given data to decimal format.
// Input Format:
// The input consists of integer data, representing the binary number form of the
// data received.
// Output Format:
// Print an Integer representing the decimal form of the received data.
// Code Constraints:
// 1≤ N ≤10 5

#include<iostream>
using namespace std;
int main()
{
    int bnum;
    cin>>bnum;

    int dnum = 0;

    int base = 1;

    while(bnum > 0)
    {
        int last_digit = bnum % 10;
        dnum = dnum + last_digit * base;
        base = base * 2;
        bnum = bnum / 10; 
    }

    cout<<dnum<<endl;
}