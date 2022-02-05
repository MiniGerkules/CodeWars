// https://www.codewars.com/kata/556deca17c58da83c00002db

#include <iostream>
#include <vector>
#include <cassert>
#include "Helpers.h"

std::vector<int> tribonacci(std::vector<int> signature, int n) {
    std::vector<int> result;

    if (n > 0) {
        result.reserve(n);
        int addition = n > 3 ? 3 : n;
        std::copy(signature.begin(), signature.begin() + addition, std::back_inserter(result));

        for (size_t i = 3; i < n; ++i)
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
    }

    return result;
}

int main() {
    std::vector<int> signature = { 1, 1, 1 };
    std::vector<int> expected = { 1, 1, 1, 3, 5, 9, 17, 31, 57, 105 };
    std::vector<int> fromFun = tribonacci(signature, 10);
    printVector(fromFun);
    printVector(expected);
    assert(compareVectors(fromFun, expected));
    
    std::vector<int> signature2 = { 0, 0, 1 };
    std::vector<int> expected2 = { 0, 0, 1, 1, 2, 4, 7, 13, 24, 44 };
    std::vector<int> fromFun2 = tribonacci(signature2, 10);
    printVector(fromFun2);
    printVector(expected2);
    assert(compareVectors(fromFun2, expected2));

    return 0;
}