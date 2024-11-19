#include "lab.h"

void Sort(std::list<int>& nums) {

    auto size_vect = nums.begin();
    while (size_vect != nums.end()) {
        auto max_vect = size_vect;
        for(auto iter {size_vect}; iter != nums.end(); ++iter) {
            if (*iter > *max_vect) {
                max_vect = iter;
                *max_vect = *iter;
                //std::cout << *max_vect << std::endl;
            }
        }
        std::swap(*max_vect, *size_vect);
        ++size_vect;
    }
}