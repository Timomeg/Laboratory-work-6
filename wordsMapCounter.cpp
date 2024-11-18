#include "lab.h"
std::map<std::string, int> wordsMapCounter(const std::string& str){
    const std::string str1 = str + '.';
    std::string word;
    std::map<std::string, int> map1;

    for (int i{}; i < str1.length(); i++) {
        if (str1[i] == ' ' || str1[i] == ',' || str1[i] == '.') {
            if (map1.count(word) == 0) {
                map1[word] = 1;
            }
            else if (map1.count(word) == 1) {
                map1[word] = map1[word] + 1;
            }
            word = "";
        }
        else {
            word += str[i];
        }
    }
    return map1;
}