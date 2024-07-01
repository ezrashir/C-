// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LEN = 25;

    char arr_str1[LEN] = "Hey guys! ";
    char arr_str2[] = "What's up?";

    std::string std_str1 = "Hey all! ";
    std::string std_str2 = "How are you?";

    strncat_s(arr_str1, arr_str2, LEN); // this func modifies the first string!!!!!!
    std::cout << arr_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl; // this works only for the std string arrays!!!


    std::cout << std::endl << std::endl;
    return (0);
}
