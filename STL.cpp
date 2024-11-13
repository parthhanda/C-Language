// STL -> Standard Template Library

// Vector -> Vector is used with dynamic array that can resize itself , automatically when elements are added or removed.
// 1) Random access
// 2) Memory Management 
// 3) Dynamic sizing
// 4) It can store any data type including user defined datatype

// For adding element we use push_back(). 
// For remving element we use pop_back().

// To access any element we use operator[]



// QUESTION
// Library Management System

// You are tasked with creating a simple Library Management System using C++. The system allows users to manage a collection of books. Implement a Library class with the following functionalities:

// Add a Book: Add a book to the collection.
// Remove the Last Book: Remove the last book added to the collection.
// Remove a Specific Book: Remove a specific book by title.
// Display All Books: Display the list of all books in the collection.
// The program should continuously prompt the user for commands until they choose to exit. Use the Standard Template Library (STL) vector to store the books.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> tasks;

public:
    
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Added: " << task << "\n";
    }


    void removeLastTask() {
        if (!tasks.empty()) {
            cout << "Removed: " << tasks.back() << "\n";
            tasks.pop_back();
        } else {
            cout << "No tasks to remove.\n";
        }
    }

    void displayTasks() {
        cout << "To-Do List:\n";
        for (const auto& task : tasks) {
            cout << "- " << task << "\n";
        }
    }
};

int main() {
    ToDoList myList;

    myList.addTask("Finish homework");
    myList.addTask("Go grocery shopping");
    myList.addTask("Clean the house");

    myList.displayTasks();

    myList.removeLastTask();
    myList.displayTasks();

    return 0;
}