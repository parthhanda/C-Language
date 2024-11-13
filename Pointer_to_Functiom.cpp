// #include <iostream>
// #include <vector>

// using namespace std;

// void start() {
//     cout << "Starting..." << endl;
// }

// void stop() {
//     cout << "Stopping..." << endl;
// }

// void pause() {
//     cout << "Pausing..." << endl;
// }

// void showHelp() {
//     cout << "Available commands:" << endl;
//     cout << "1 - Start" << endl;
//     cout << "2 - Stop" << endl;
//     cout << "3 - Pause" << endl;
//     cout << "4 - Show Help" << endl;
//     cout << "5 - Show Command History" << endl;
//     cout << "0 - Exit" << endl;
// }

// // This line defines a function called execute command that doeas not return any value.
// void executeCommand(void (*command)(), vector<string>& history) { // It is used to keep tack of what command has been executed.
//     command();
//     history.push_back("Command executed"); // This line adds the string command executed to the history vector
// }

// int main() {

//     // It can point to different function that can execute later.
//     void (*commandPointer)();
//     vector<string> commandHistory;
//     int choice;

//     cout << "Command line interface. Type 4 for help." << endl;

//     while (true) {
//         cout << "Enter command (1 for start, 2 for stop, 3 for pause, 4 for help, 5 for history, 0 to exit): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 commandPointer = start;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 2:
//                 commandPointer = stop;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 3:
//                 commandPointer = pause;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 4:
//                 showHelp();
//                 break;
//             case 5:
//                 cout << "Command History:" << endl;
//                 for (const auto& entry : commandHistory) {
//                     cout << entry << endl;
//                 }
//                 break;
//             case 0:
//                 cout << "Exiting program." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice! Please enter a valid command." << endl;
//                 break;
//         }
//     }

//     return 0;
// }





// QUESTION
// Create a program that allow a user to manage a task list the program should support the following program -
// 1) Add a new task to the list.
// 2) Remove task - Remove a task from the list.
// 3) Display task - Display all the tasks.
// 4} Clear task - Clear all the tasks from the list.
// 5) Use a function pointer to execute a command and maintain a history of action taken.

#include <iostream>
#include <vector>

using namespace std;

void add(){
    cout << "Add a new task" << endl;
}
void remove(){
    cout << "Remove a task" << endl;
}
void display(){
    cout << "Display a task" << endl;
}
void clear(){
    cout << "Clear a task" << endl;
}
void showHelp() {
    cout << "tasks available: " << endl;
    cout << "1 - add" << endl;
    cout << "2 - remove" << endl;
    cout << "3 - display" << endl;
    cout << "4 - clear" << endl;
    cout << "5 - Show help" << endl;
    cout << "6 - Show command history" << endl;
    cout << "0 - exit"<< endl;
}