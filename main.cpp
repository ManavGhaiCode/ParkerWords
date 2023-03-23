#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int main() {
    std::ifstream uniq5;
    uniq5.open("uniq5.txt");

    if (!uniq5.is_open()) {
        uniq5.close();
        std::exit(1);
    }

    std::vector<std::string> uniq5Array;
    int i = 0;

    for (std::string word = ""; std::getline(uniq5, word);) {
        uniq5Array[i] = word;
    }

    uniq5.close();

    std::cout << "Done!" << std::endl;
    return 0;
}