#include "lab.h"

void reverseNum(std::list<int>& nums) {
    auto iter = nums.begin();
    int size = nums.size();
    int i{};
    while (i != size) {
        nums.insert(iter--, -*iter);
        ++iter;
        ++iter;
        ++iter;
        i++;
    }
}