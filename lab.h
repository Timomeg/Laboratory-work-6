
#ifndef LAB_H
#define LAB_H

#endif //LAB_H
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
// Задание 1
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
// Задание 2
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
// Задание 3
int wordsCounter(const std::string& str);
// Задание 4
std::map<std::string, int> wordsMapCounter(const std::string& str);
// Задание 5
std::vector<std::string> uniqueWords(const std::string& str);
// Задание 6
int diffWordsCounter(const std::string& str);
// Задание 7
void reverseNum(std::list<int>& nums);
// Задание 8
void plusesDeleter(std::vector<int>& vect);
// Задание 9
void Sort(std::list<int>& nums);