#include "lab.h"

int diffWordsCounter(const std::string& str) {

    std::set<std::string> uni_words;
    const std::string str1 = str + '.';
    std::vector<std::string> uni_vect;
    std::string word;

    for (int i{}; i < str1.length(); i++) {
        if (str1[i] == ' ' || str1[i] == ',' || str1[i] == '.') {
            uni_words.insert(word);
            word = "";
        }

        else {
            word += str[i];
        }
    }
    return uni_words.size();
}