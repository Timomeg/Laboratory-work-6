#include "lab.h"
int wordsCounter(const std::string& str) {
    int num{};
    const std::string str1 = str + '.';
    for (int i{}; i < str1.length(); i++) {
        if (str1[i] == ' ' || str1[i] == ',' || str1[i] == '.'){
            num += 1;
        }
    }
    return num;
}