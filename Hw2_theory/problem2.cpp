#include <iostream>

int evenCount(unsigned int value) {
    if (value < 10) {
        return (value % 2 == 0) ? 1 : 0;
    }
    
    int lastDigit = value % 10;
    int count = (lastDigit % 2 == 0) ? 1 : 0;
    
    return count + evenCount(value / 10);
}

int main() {
    unsigned int number;
    
    std::cout << "Enter the number ";
    if (!(std::cin >> number)) return 0;

    std::cout << "The number of even digits is " << evenCount(number) << std::endl;
    
    return 0;
}