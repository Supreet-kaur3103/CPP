/*Coders use outputs all the time to check that the computer is following the given instructions and fix problems with code.
A header is a file that contains functions and commands. 
The <iostream> header in C++ contains the cout command, that we used for outputting text. This is why we need to include it in our program, to enable us to use the cout command.
The following line of code displays "Welcome to C++" on the screen as an output:*/
#include <iostream>
using namespace std;
int main()
{
   cout << "Welcome to C++";



/*This tells the program to use the std namespace.

We need to do this as the cout command is part of the std namespace.
A namespace is used to organize code into logical groups and give them names.

So, the std namespace is part of the <iostream> header, containing the cout command.
Each C++ program has a entry point, or starting point, which is a function called main.
Curly brackets { } indicate the beginning and end of a function, which can also be called the function's body. The code inside the brackets indicates what the function does when executed.*/


cout<<endl<<"**************************************************************"<<endl;

// To add a new line, you can use the endl command, like this:


cout << "This is the first line" << endl;
cout << "This is the second line";
}