#include <iostream>
#include <string>

class binWord {
    private:
        bool rep[26];
    public:
        static binWord ParseWord(std::string word) {
            bool rep[26];

            if (word.find('a') != std::string::npos) {
                rep[0] = 1;
            } if (word.find('b') != std::string::npos) {
                rep[1] = 1;
            } if (word.find('c') != std::string::npos) {
                rep[2] = 1;
            } if (word.find('d') != std::string::npos) {
                rep[3] = 1;
            } if (word.find('e') != std::string::npos) {
                rep[4] = 1;
            } if (word.find('f') != std::string::npos) {
                rep[5] = 1;
            } if (word.find('g') != std::string::npos) {
                rep[6] = 1;
            } if (word.find('h') != std::string::npos) {
                rep[7] = 1;
            } if (word.find('i') != std::string::npos) {
                rep[8] = 1;
            } if (word.find('j') != std::string::npos) {
                rep[9] = 1;
            } if (word.find('k') != std::string::npos) {
                rep[10] = 1;
            } if (word.find('l') != std::string::npos) {
                rep[11] = 1;
            } if (word.find('m') != std::string::npos) {
                rep[12] = 1;
            } if (word.find('n') != std::string::npos) {
                rep[13] = 1;
            } if (word.find('o') != std::string::npos) {
                rep[14] = 1;
            } if (word.find('p') != std::string::npos) {
                rep[15] = 1;
            } if (word.find('q') != std::string::npos) {
                rep[16] = 1;
            } if (word.find('r') != std::string::npos) {
                rep[17] = 1;
            } if (word.find('s') != std::string::npos) {
                rep[18] = 1;
            } if (word.find('t') != std::string::npos) {
                rep[19] = 1;
            } if (word.find('u') != std::string::npos) {
                rep[20] = 1;
            } if (word.find('v') != std::string::npos) {
                rep[21] = 1;
            } if (word.find('w') != std::string::npos) {
                rep[22] = 1;
            } if (word.find('x') != std::string::npos) {
                rep[23] = 1;
            } if (word.find('y') != std::string::npos) {
                rep[24] = 1;
            } if (word.find('z') != std::string::npos) {
                rep[25] = 1;
            }

            return *(new binWord(rep));
        }

        binWord() {};

        binWord(bool start_rep[26]) {
            this->Set(start_rep);
        }

        void Set(bool new_rep[26]) {
            for (int i = 0; i < 26; i++) {
                rep[i] = new_rep[i];
            }
        }

        bool * Get() {
            return rep;
        }
};