#include <iostream>
#include <vector>

// Prints the contents of a vector
void printArray(const std::vector<int>& arr) {
    for (int num : arr) std::cout << num << " ";
    std::cout << "\n";
}

// Merges two sorted sub-vectors
void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    std::vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;
    while (i < L.size() && j < R.size()) {
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while (i < L.size()) arr[k++] = L[i++];
    while (j < R.size()) arr[k++] = R[j++];
}

// Recursive Merge Sort
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    std::vector<int> data = {38, 27, 43, 3, 9, 82, 10};
    
    std::cout << "Original Array: ";
    printArray(data);
    
    mergeSort(data, 0, data.size() - 1);
    
    std::cout << "Sorted Array:   ";
    printArray(data);
    
    return 0;
}
