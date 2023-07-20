#include <iostream>
using namespace std;

int main() {
   string name;
   cin >> name;
   try {
      if(name.size() <4 || name.size()>20){
         throw 20;
      }
      else{
         cout<<"Valid";
      }
   }
   catch(int x) {    //catch(...) catches any type of exception
      cout<<"Invalid";
   }
   
   return 0;
}