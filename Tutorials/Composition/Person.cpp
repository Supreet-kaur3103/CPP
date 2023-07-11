#include <string>
#include<iostream>
#include "Birthday.h"
using namespace std;


class Person {
 public:
  Person(string n, Birthday b)
  : name(n),
  bd(b)
  {
  }
  void printInfo()
  {
   cout << name << endl;
   bd.printDate();
  }
 private:
  string name;
  Birthday bd;
};

int main() {
    Birthday bd(8, 10, 1997);
    Person p("Supreet", bd);
    p.printInfo();
}