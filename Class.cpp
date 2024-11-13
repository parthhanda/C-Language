// #include<iostream>
// using namespace std;

// inline int product (int x,int y)
// {
//     return x*y;
// }

// int main ()
// {
//     int x,y;
//     cout<<"Enter x"<<endl;
//     cin>>x;
//     cout<<"Enter y"<<endl;
//     cin>>y;

//     cout<<"X x Y = "<<product(x,y)<<endl;
// }

// call by refence
// in call by value actual value of variable cant,t be changed . If you change the value of function parameter it is only change for current function.

// CAll by VALUE
// Any modification may be formal parameter is also reflected in actual parameter.

#include<iostream>
using namespace std;

int main(){
    int a =  10;
    int *p = &a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}

// * is value of address operator.