// Error Handling
// - Exception Handling -> Exception handling is a unwanted abnormal unexpected situation that occur on run time , it has a library (#include <stdexcept>). It provide classes for exception such as invalid_argument,run_time error etc.

// key point - 
//1) try : in the block of try contain  code that might through an exception 
//2) catch: a block that handle exception through in the try block 
//3) throw : it is used for signal that an exception has occur

// WHAT -> "what" keyword is used to print error that is present in throw.

// #include<iostream>
// #include<stdexcept>
// using namespace std;
// main(){
//     double bal = 12345.0;
//     try{
//         double amt;
//         //Deposit
//         cout<<"Enter Deposit Amount: "<<endl;
//         cin>>amt;
//         if(amt<=0){
//         throw invalid_argument("invalid Deposit Amount : ");   
//             // cout<<"Invalid Deposit Amount: "<<endl;
//         }
//         bal=bal+amt;
//         cout<<"Available Amount: "<<bal<<endl;

//         //withdraw
//         cout<<"Enter withdraw Amount: "<<endl;
//         cin>>amt;
//         if(amt<=0){
//             throw invalid_argument("invalid withdraw Amount : "); 
        
//             // cout<<"Invalid withdraw Amount: "<<endl;
//         }
//         if(amt>bal){
//             throw runtime_error("Insufficient Fund : "); 
//             // cout<<"Isufficient Fund "<<endl;
//         }
//         bal=bal-amt;
//         cout<<"Available Amount: "<<bal<<endl;
//     }
//     // catch(exception e){
//     catch(exception& e){
//         cout<<e.what();


//     }
// }

// QUESTION ->
// You are tasked with implementing a Savings Account Management System in C++. The system should allow users to create accounts, deposit money, withdraw money, and view their account balance. Ensure that all operations handle invalid inputs and potential errors using exceptions.

// Requirements:
// Class Definition:

// Create a class named SavingsAccount that contains:
// A private double member variable balance to hold the account balance.
// A constructor that initializes balance to zero.
// A method createAccount() that:
// Initializes the balance to an amount specified by the user.
// Throws an invalid_argument exception with the message "Initial Deposit Must Be Positive" if the amount is less than or equal to zero.
// A method deposit(double amount) that:
// Accepts a deposit amount.
// Throws an invalid_argument exception with the message "Invalid Deposit Amount" if the amount is less than or equal to zero.
// Adds the deposit amount to balance if valid.
// A method withdraw(double amount) that:
// Accepts a withdrawal amount.
// Throws an invalid_argument exception with the message "Invalid Withdrawal Amount" if the amount is less than or equal to zero.
// Throws a runtime_error with the message "Insufficient Funds" if the withdrawal amount exceeds balance.
// Subtracts the withdrawal amount from balance if valid.
// A method getBalance() that returns the current balance.
// Main Function:

// In the main function:
// Create an instance of SavingsAccount.
// Implement a menu-driven interface that allows the user to:
// Create an account with an initial deposit.
// Deposit money.
// Withdraw money.
// View the account balance.
// Exit the program.