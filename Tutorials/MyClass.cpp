#include "MyClass.h"
#include <iostream>
#include<string>
using namespace std;



MyClass::MyClass(int a) : var(a){}



void MyClass::printInfo()
{cout<<endl<<"Called using THIS-> pointer"<<endl;
   cout << var<<endl;
   cout <<"this->var: " <<this->var<<endl;
   cout <<"(*this).var: " <<(*this).var<<endl; 
}
MyClass::MyClass() {
    // Constructor implementation
}



void MyClass::someMethod() {



    // Method implementation
   cout << "Hello World!" <<endl;
}
void MyClass::myPrint() const {
   cout <<"Constant Method Called"<<endl;
}
