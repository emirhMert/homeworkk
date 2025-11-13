#include <vector>

int linearSearch(std::vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    for (int i = 0; i < arr.size(); i++) {
        comparisons++;
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(const std::vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        comparisons++;
        
        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

std::vector<int> generateSortedVector(int n) {
    std::vector<int> vec;
    for (int i = 1; i <= n; i++) {
        vec.push_back(i);
    }
    return vec;
}
