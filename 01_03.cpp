// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    
    std::string str;
    std::cout << "Please enter your name:" << std::endl;
    std::cin >> str;
    std::cout << str;
    std::cout << " is a beautiful name. ";
    std::cout << "Nice to meet you, " << str << "!" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}