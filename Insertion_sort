#include <iostream>

// Function to sort an array using Insertion Sort
void insertionSort(int arr[], int size) {
    // Start from the second element (index 1)
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // The element to be positioned
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than the key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Insert the key into its correct sorted position
        arr[j + 1] = key;
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int size = sizeof(data) / sizeof(data[0]);

    std::cout << "Original array: ";
    printArray(data, size);

    insertionSort(data, size);

    std::cout << "Sorted array:   ";
    printArray(data, size);

    return 0;
}
