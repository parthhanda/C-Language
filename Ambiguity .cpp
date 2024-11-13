// Ambiguity arise when multiple classes inherit from the same base class and are inhertited by a derived class.
// Use scope resolution to a specifier which base class method to call.
// Use virtual instance to insure a single instance of the commmon base class eliminating Ambiguity.

// #include <iostream>
// using namespace std;

// class Person {
// public:
//     void display() {
//         cout << "Person" << endl;
//     }
// };

// class Teacher : public Person {
// public:
//     void display() {
//         cout << "Teacher" << endl;
//     }
// };

// class Staff : public Person {
// public:
//     void display() {
//         cout << "Staff" << endl;
//     }
// };

// class Principal : public Teacher, public Staff {
// public:
//     void show() {
//         cout << "Hello " << endl;
//         Teacher::display();  
//         Staff::display();    
//     }
// };

// class Student : public Principal {
// public:
//     void introduce() {
//         cout << "I am a Student." << endl;
//     }
// };

// int main() {
//     Principal principal;
//     principal.show();
   

//     Student student;
//     student.introduce();
//     return 0;
// }






// What issues might arise when calling garage.display() in the main() function?
// How would you resolve the ambiguity when multiple show methods exist in the derived classes (Car and Bike)?
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

class Vehicle {
public:
    void show() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void show() {
        cout << "This is a Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void show() {
        cout << "This is a Bike" << endl;
    }
};

class Garage : public Car, public Bike {
public:
    void display() {
        Car::show();
        Bike::show();
    }
};

class Owner : public Garage {
public:
    void introduce() {
        cout << "I am the Owner." << endl;
    }
};

int main() {
    Garage garage;
    garage.display();

    Owner owner;
    owner.introduce();
    return 0;
}