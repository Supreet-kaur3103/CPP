#include <iostream>
#include "Engine.h"

Engine::Engine(int p)
    : power(p) {}

void Engine::start() {
    std::cout << "Engine ON (" << power << " horsepower)";
}
