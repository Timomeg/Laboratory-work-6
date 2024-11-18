#include "lab.h"

void plusesDeleter(std::vector<int>& vect){
    auto iter = vect.begin();
    while (iter < vect.end()) {
        if (*iter > 0) {
            vect.erase(iter);
        }
        ++iter;
    }
}