#include "lab.h"

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el){
    auto iter = first;
    while (iter != last){
        if (*iter == el){
            return iter;
        }
        iter ++;
    }
    return iter;
}