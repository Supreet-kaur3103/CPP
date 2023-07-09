
#include<iostream>
using namespace std;
int main(){
    // Let's create a variable of type string:
    string message; //declare variable
    message = "Welcome"; //assign variable
    cout << message; //use variable
    // We can combine the declaration and assignment into one statement, like this:
//     A variable can change its value during the program multiple times. 
// For example, the message can change based on the language:
    string message = "Hello";
    0
// C++ supports many different types for your variables, based on their value.
// The int type is used to store whole numbers (called integers in programming):
    int points = 128;
    // To store decimals (or floating point numbers), C++ provides the float and double data types.
    double temp = 84.2;
    // The float type is also used to store decimals. 
    // To specify that the value is a float, we need to use the letter f after it:
    float length = 5.31f;

//     By default, decimal values are of type double.

// float uses less storage in the memory, but is not as precise as the double type.

// This means that calculations that use floats are faster than the ones that use double, however, the results are less accurate in terms of the decimal digits.

// The char type is used to store a single character.

// It is similar to declaring a string, but uses single quotes for the value:

    char x = 'H';
//     The bool type can only hold values: either true or false.

// It is used when working with conditions.
    bool online = false;

    int a = 8;
    int b = 24;
    cout << a+b;

    // Another handy keyword is auto.
    // The auto keyword allows you to set the type of the variable based on its value.
    auto x = 4;
    auto y = 3.37; 
    auto z = "hello";

    // When using the auto keyword, the variable must be assigned a value during declaration, else you will get an error.
}