#include <iostream>
using namespace std;

class Shape
{
    public:
        void draw() {
            cout << "Drawing...";
        }
};
//inherit from Shape
class Rectangle: public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {
            cout <<w<<"x"<<h<<endl;
        };
};

int main() {
    int x, y;
    cin>>x>>y;
    Rectangle d(x, y);
    //call the draw() method
    d.draw();
    
}

// Public Inheritance: public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class. A base class' private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

// Protected Inheritance: public and protected members of the base class become protected members of the derived class.

// Private Inheritance: public and protected members of the base class become private members of the derived class.