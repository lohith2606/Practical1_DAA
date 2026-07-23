#include <iostream>
#include <utility> // For std::swap

// Function to perform an optimized bubble sort
void bubbleSort(int arr[], int size) {
    bool swapped;
    
    // Outer loop for each pass through the array
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        // The last i elements are already in place
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is greater than the next
                std::swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array elements
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);
    
    std::cout << "Original array: ";
    printArray(data, size);
    
    bubbleSort(data, size);
    
    std::cout << "Sorted array:   ";
    printArray(data, size);
    
    return 0;
}
