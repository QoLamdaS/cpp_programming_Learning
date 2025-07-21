#include <iostream>
#include <string> // Required for std::string

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age; // Reads an integer into 'age'

    std::string firstName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName; // Reads a single word string into 'firstName'

    std::cout << "Hello, " << firstName << "! You are " << age << " years old." << std::endl;
    return 0;
}