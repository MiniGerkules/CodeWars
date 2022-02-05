// https://www.codewars.com/kata/54e6533c92449cc251001667

#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#include "Helpers.h"

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> result;
    
    if (iterable.size() != 0) {
        result.push_back(iterable[0]);
        T lastDiff = iterable[0];
        
        for (size_t i = 1; i < iterable.size(); ++i) {
            if (lastDiff != iterable[i]) {
                lastDiff = iterable[i];
                result.push_back(lastDiff);
            }
        }
    }

    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
    return uniqueInOrder(std::vector<char>{iterable.begin(), iterable.end()});
}

int main() {
    std::vector<char> v1 = uniqueInOrder("");
    std::vector<char> r1;
    assert(compareVectors(v1, r1));

    std::vector<char> v2 = uniqueInOrder("AA");
    std::vector<char> r2{'A'};
    assert(compareVectors(v2, r2));

    std::vector<char> v3 = uniqueInOrder("A");
    std::vector<char> r3{'A'};
    assert(compareVectors(v3, r3));

    std::vector<char> v4 = uniqueInOrder("AAAABBBCCDAABBB");
    std::vector<char> r4{'A', 'B', 'C', 'D', 'A', 'B'};
    assert(compareVectors(v4, r4));

    std::vector<char> v5 = uniqueInOrder("AADD");
    std::vector<char> r5{'A', 'D'};
    assert(compareVectors(v5, r5));

    std::vector<char> v6 = uniqueInOrder("AAD");
    std::vector<char> r6{'A', 'D'};
    assert(compareVectors(v6, r6));

    std::vector<char> v7 = uniqueInOrder("ADD");
    std::vector<char> r7{'A', 'D'};
    assert(compareVectors(v7, r7));

    std::vector<char> v8 = uniqueInOrder("ABBCcAD");
    std::vector<char> r8{'A', 'B', 'C', 'c', 'A', 'D'};
    assert(compareVectors(v8, r8));

    std::vector<int> v9 = uniqueInOrder(std::vector<int>{1, 2, 3, 3});
    std::vector<int> r9{1,2,3};
    assert(compareVectors(v9, r9));

    std::vector<char> v10 = uniqueInOrder(std::vector<char>{'a','b','b'});
    std::vector<char> r10{'a','b'};
    assert(compareVectors(v10, r10));

    return 0;
}