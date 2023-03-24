#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "binWord.h"

int main() {
    std::ifstream uniq5;
    uniq5.open("uniq5.txt");

    if (!uniq5.is_open()) {
        std::exit(1);
    }

    std::vector<std::string> uniq5Vector;

    for (std::string word = ""; std::getline(uniq5, word);) {
        uniq5Vector.push_back(word);
    }

    uniq5.close();

    binWord uniq5_words[uniq5Vector.size()];

    for (long unsigned int i = 0; i < uniq5Vector.size(); i++) {
        uniq5_words[i] = binWord::ParseWord(uniq5Vector[i]);
        std::cout << uniq5Vector.at(i) << std::endl;
    }
    
    std::cout << "Done!" << std::endl;
    return 0;
}