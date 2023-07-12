#include "MyClass.h"
#include<iostream>
#include<string>
using namespace std;

void someFunc(MyClass &obj5) {
    obj5.regVar = 42;
    cout<<"Using Friend Class: ";
    cout << obj5.regVar;
}
int main(){
    MyClass obj;
    cout<<"Called using Normal Object: ";
    obj.someMethod();

// using pointer to access the methods in the class
    MyClass obj2;
    MyClass *pts = &obj2;
   cout<<"Called using Pointer:";
    pts -> someMethod();

// only constant object can access constant method of the class. A constant object can't call regular functions. 
  const MyClass obj3;
  obj3.myPrint();

//accessing and printing private member of the class through a friend function
MyClass obj5;
    someFunc(obj5);

//using This -> pointer
MyClass obj4(59);
  obj4.printInfo();




}

// Instructions to compile and run MyClass Files in VS Code.
// In the terminal and make sure you are in the right directory where all the files(Header file, source file and the main file) are located.
//type g++ MyClass_main.cpp MyClass.cpp -o output.
//This will complie both the files and make a new file called "output.exe"
// Now type .\output.exe.