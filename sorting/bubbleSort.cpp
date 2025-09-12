#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,temp = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
               temp = arr[j]; 
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity: O(N^2), Space complexity: O(1)

// Optimised Buble Sort
    // for(int i = 0; i < n-1; i++) {
    //     bool swapped = false; 
    //     for(int j = 0; j < n-i-1; j++) {
    //         if(arr[j] > arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //             swapped = true;
    //         }
    //     }

    //     if(!swapped) {
    //         break;
    //     }
    // }

// Time Complexity: O(^2) for the worst and average cases and O(N) for the best case
// Space Complexity: O(1)