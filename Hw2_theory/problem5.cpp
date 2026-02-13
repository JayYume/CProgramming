#include <iostream>
#include <vector>
#include <string>

std::string my_join(const std::vector<std::string>& words, std::string separ) {
    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += separ;
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words;
    std::string input;

    std::cout << "Enter strings (\"exit\" to stop)" << std::endl; 
    while (true) {
        std::cin >> input;
        if (input == "exit") break; 
        words.push_back(input);
    }

    std::string separator;
    std::cout << "Enter the separator" << std::endl; 
    std::cin >> separator;

    std::cout << my_join(words, separator) << std::endl;

    return 0;
}