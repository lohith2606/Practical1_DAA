#include <iostream>
#include <utility> // For std::swap

// Function to perform selection sort on an array
void selectionSort(int arr[], int size) {
    // Move the boundary of the unsorted subarray one by one
    for (int i = 0; i < size - 1; ++i) {
        // Assume the first unsorted element is the minimum
        int minIndex = i;
        
        // Test elements in the unsorted portion to find the actual minimum
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update index of the lower element
            }
        }
        
        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

// Function to print the array elements
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int size = sizeof(data) / sizeof(data[0]);
    
    std::cout << "Original array: ";
    printArray(data, size);
    
    // Sort the array using selection sort
    selectionSort(data, size);
    
    std::cout << "Sorted array: ";
    printArray(data, size);
    
    return 0;
}
