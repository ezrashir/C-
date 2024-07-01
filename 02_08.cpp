// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define h_len 4


int main(){
    const size_t h_len = 4;
    int h[h_len];
    float temp[] = {31.5, 32.7, 38.9};


    h[0] = 25;
    h[1] = 45;
    h[2] = 7;
    h[3] = 78;

    std::cout << "this array has " << h_len << " elements." << std::endl;
    std::cout << "Age[0] = " << h[0] << std::endl;
    std::cout << "Age[1] = " << h[1] << std::endl;
    std::cout << "Age[2] = " << h[2] << std::endl;
    std::cout << "Age[3] = " << h[3] << std::endl;
    std::cout<< std::endl;
    std::cout << "temp[0] = " << temp[0] << std::endl;
    std::cout << "twmp[1] = " << temp[1] << std::endl;
    std::cout << "temp[2] = " << temp[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
