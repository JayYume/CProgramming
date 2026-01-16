#include <iostream>
#include <string>

int main (void){
    //CREATE STRING
    std::string str = "Hello";

    std::cout << str << std::endl;
    std::cout << "the string size is " <<str.size() << std::endl;
    
    //append another string
    str+= " World";
    std::cout << str << std::endl;
    std::cout << "thie string size is " <<str.size() << std::endl;
    
    return 0;
}