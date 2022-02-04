#include <vector>
#include "Helpers.h"

template <typename T>
bool compareVectors(std::vector<T> first, std::vector<T> second) {
    if (first.size() != second.size())
        return false;

    for (size_t i = 0; i < first.size(); ++i)
        if (first[i] != second[i])
            return false;

    return true;
}

template <typename T>
void printVector(std::vector<T> toPrint) {
    for (const T elem : toPrint)
        std::cout << elem << " ";
    std::cout << std::endl;
}
