// Abir Seth
// ENTC A1
// PRN-24070123003

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Original array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    // Reversing the array using a for loop
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


Reversed Array: 5 4 3 2 1 
