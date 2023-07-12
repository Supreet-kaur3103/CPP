#include "MyClass.h"
#include<iostream>
#include<string>
using namespace std;


int main(){


//Operator Overloading
MyClass obj1(12), obj2(55);
    MyClass res = obj1+obj2;
    cout<<endl<<"Operator Overloading: ";
    cout << res.var;

}

// Instructions to compile and run MyClass Files in VS Code.
// In the terminal and make sure you are in the right directory where all the files(Header file, source file and the main file) are located.
//type g++ MyClass_main.cpp MyClass.cpp -o output.
//This will complie both the files and make a new file called "output.exe"
// Now type .\output.exe.