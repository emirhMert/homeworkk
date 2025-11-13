#include <iostream>
#include <cstdlib>
#include <ctime>
#include "searchUtils.h"

int main() {
    std::srand(std::time(nullptr));
    
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    auto arr = generateSortedVector(n);

    int linComp, binComp;
    int key;
    key = 1 + std::rand() % n;
    int linIndex = linearSearch(arr, key, linComp);
    int binIndex = binarySearch(arr, key, binComp);

    std::cout << "Linear search: vector size = " << n << ", comparisons = " << linComp << "\n";
    std::cout << "Binary search: vector size = " << n << ", comparisons = " << binComp << "\n";
    return 0;
}