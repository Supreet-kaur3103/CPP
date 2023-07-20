#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream MyFile1("test.txt");
    
    MyFile1 << "This is awesome! \n";
    MyFile1.close();

    string line;
    ifstream MyFile("test.txt");
    while ( getline (MyFile, line) ) {
        cout << line << '\n';
    }
    MyFile.close();
}

// File Flags
// ios::app append to end of file
// ios::ate go to end of file on opening
// ios::binary open file in binary mode
// ios::in open file in read only
// ios::out open file for writing only
// ios::trunc delete the contents of file if it exists