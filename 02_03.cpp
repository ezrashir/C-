// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a = 2, b = 6;



/* Multu
line
comments
*/


int main(){ // singe line comments

    bool my_flag;
    my_flag = false;
    a = 7;


    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "My flag = " << my_flag << std::endl;
    
    std::cout << my_flag << std::endl;
    std::cout << "a+b = " << a+b << std::endl;
    std::cout << "b=a = " << b-a << std::endl;

    unsigned int positive;
    positive = -9;
    std::cout << positive + a << std::endl;




    std::cout << std::endl << std::endl;
    return (0);
}
