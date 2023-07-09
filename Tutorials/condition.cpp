// if(condition) {
//   //some code
// } 
// else if(condition) {
// //some other code
// } 
// else {
//   //some other code
// }

#include<iostream>
using namespace std;
int main(){
    int age = 25;
    if(age >= 65) {
    cout << "Senior";
    }
    else if(age >= 18) {
    cout << "Adult";
    }
    else {
    cout << "Child";
    }

    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice) {
  case 1:
    cout << "Coffee";
    break;
  case 2:
    cout << "Tea";
    break;
  case 3:
    cout << "Water";
    break;
  default:
    cout << "Invalid Choice";
}
// The break statement is used to terminate the switch, when the case it matched.

// If you forget to add the break after each case, the program will continue to execute the code in the next case statements, even if their value does not match the variable's value.
// This type of behavior is called fall-through.
}