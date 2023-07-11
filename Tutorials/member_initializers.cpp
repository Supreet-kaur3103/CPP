#include <iostream>
using namespace std;

class TV {
public:
    // Constructor with height and width as parameters
    TV(int h, int w): height(h), width(w) {};

    // Method to calculate and print the area of the TV
    void area() {
        cout << height * width; // Print the area of the TV (height multiplied by width)
    }

private:
    int height; // Height of the TV
    int width;  // Width of the TV
};

int main() {
    // Prompt the user to enter the height and width of the TV
    int x, y;
    cout << "Enter the height and width of the TV: ";
    cin >> x >> y;

    // Create an instance of the TV class with the provided height and width
    TV obj(x, y);

    // Call the area() method to calculate and print the area of the TV
    obj.area();

    return 0;
}
