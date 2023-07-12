#include "MyClass.h"
#include <iostream>
#include<string>
using namespace std;



MyClass::MyClass(int a) : var(a){}




MyClass::MyClass() {
    // Constructor implementation
}

MyClass MyClass::operator+(MyClass & obj)// Operator Overloading
{
    MyClass res;
    res.var= this->var+obj.var;
    return res; 
}

