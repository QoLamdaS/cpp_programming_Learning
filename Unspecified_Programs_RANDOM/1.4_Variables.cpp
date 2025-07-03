#include <iostream>

int main()
{
    
    int age;
    age = 1234567890;
    std::cout << age;
    age = 88888888;
    std::cout << "\n" << age;

    int AgE_2 {232}; //! {232} is a INITIALIZER
    std::cout << "\n" << AgE_2;
    double PIE {314.444314}; //* {} is only for initializer
    std::cout << "\n" << PIE;
    PIE = 2123.4533;
    std::cout << "\n" << PIE;
    PIE = 453923.456;
    std::cout << "\n" << PIE;

    [[maybe_unused]] double gravity {9.8}; //* Don't complain if gravity is unused
    //! The compiler will no longer warn about gravity not being used
    
    return 0;

}