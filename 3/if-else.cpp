#include <iostream>

int main(int argc, char *argv[])
{
    unsigned int x{};
    std::cout << "Entera number: ";
    std::cin >> x;

    if (x>=0) {
        std::cout << "You entered a positive integer!" << std::endl;
    } else {
        std::cout << "You entered a negative integer!" << std::endl;
    }

    return 0;
}