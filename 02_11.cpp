// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int far = 100;
    int cel;

    cel = ((float) 5 / 9.0)*(far-32); 
    /*A simple (5/9) in the above expression will result in 0 because it takes the int of the division since both are integers.
    We need to convert them to floats.
    Here you can see this converasion in two diffrent ways*/

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << far << std::endl;
    std::cout << "Celsius: " << cel << std::endl;

    float weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer part: " << int(weight) << std::endl;
    std::cout << "Fractional part: " << weight - int(weight) << std::endl; 
    std::cout << "Fractional part: " << (int)((weight - int(weight)) * 10000) << std::endl; // supposed to get 9900. why? he's weird. 
    
    std::cout << std::endl << std::endl;
    return (0);
}
