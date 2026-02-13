#include <iostream>
#include <random>

int rollDice(std::mt19937& eng) {
    std::uniform_int_distribution<int> dist(1, 6);
    
    int die1 = dist(eng);
    int die2 = dist(eng);
    int sum = die1 + die2;
    
    std::cout << "You rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
    return sum;
}

int main() {
    int seed;
    std::cout << "Enter the seed ";
    std::cin >> seed;

    std::mt19937 eng(seed);
    int sumOfDice = rollDice(eng);
    
    if (sumOfDice == 7 || sumOfDice == 11) {
        std::cout << "You win" << std::endl;
    } 
    else if (sumOfDice == 2 || sumOfDice == 3 || sumOfDice == 12) {
        std::cout << "You lose" << std::endl;
    } 
    else {
        int point = sumOfDice;
        bool gameOver = false;
        
        while (!gameOver) {
            sumOfDice = rollDice(eng);
            
            if (sumOfDice == point) {
                std::cout << "You win" << std::endl;
                gameOver = true;
            } 
            else if (sumOfDice == 7) {
                std::cout << "You lose" << std::endl;
                gameOver = true;
            }
        }
    }

    return 0;
}