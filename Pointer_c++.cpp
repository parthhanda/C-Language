// Understanding Pointer....
// Pointer is a variable that hold the memory address of another variable.

#include<iostream>
using namespace std;
int main(){
    int a=10; // Pointer
    int *p=&a; // Pointer to ppointer
    int **q=&p;
    cout<<a<<endl; // value of a
    cout<<&a<<endl; // address of a
    cout<<p<<endl; // address of a
    cout<<*p<<endl; // value of a 
    cout<<&p<<endl; // address of p
    cout<<q<<endl; // address of p
    cout<<*q<<endl; // address of a
    cout<<**q<<endl; // value of a

}

pointer arthimetic involve operations like addition substraction applied to pointer (It works with arrays).

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {100,10,20,30,40,50,60,70,80,90};
    cout<<arr;
    cout<<*arr;
    cout<<endl;

    int *ptr;
    ptr = arr;
    ptr ++;

    cout<<endl;
    cout<<ptr<<endl;
    cout<<"Value = "<<*ptr<<endl;
    ptr += 2;

    cout<<ptr<<endl;
    cout<<"Value = "<<*ptr<<endl;

}
