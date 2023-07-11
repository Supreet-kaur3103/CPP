#include "Engine.h"
#include <iostream>
#include <string>

class Car {
public:
    Car(Engine x, std::string c, int y)
        : e(x), color(c), year(y) {}

    void start() {
        std::cout << "Starting" << std::endl;
        e.start();
    }

private:
    Engine e;
    std::string color;
    int year;
};

int main() {
    int power;
    std::string color;
    int year;

    std::cin >> power >> color >> year;

    Engine e(power);
    Car c(e, color, year);
    c.start();

    return 0;
}
