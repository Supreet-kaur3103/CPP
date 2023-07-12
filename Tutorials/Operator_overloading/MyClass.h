// ifndef stands for "if not defined". 
// The first pair of statements tells the program to define the MyClass header file if it has not been defined already.
// This prevents a header file from being included more than once within one file.

//endif ends the condition.
#ifndef MYCLASS_H//f not defined
#define MYCLASS_H

class MyClass {
public:

    MyClass(int a);
    
    MyClass();  // Constructor declaration
    MyClass operator+(MyClass &obj); //Operator Overloading
    int var;
   
};

#endif
