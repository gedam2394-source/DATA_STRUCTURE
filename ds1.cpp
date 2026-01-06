#include <iostream>
using namespace std;

// O(1) – Constant Time
int getFirst(int arr[]) {
    return arr[0];
}

// O(n) – Linear Time
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// O(n^2) – Quadratic Time
void printPairs(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}

// O(log n) – Logarithmic Time (Binary Search)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;

    cout << "O(1): " << getFirst(arr) << endl;

    cout << "O(n): ";
    printArray(arr, n);

    cout << "O(n^2):" << endl;
    printPairs(arr, n);

    int key = 8;
    int result = binarySearch(arr, n, key);

    if(result != -1)
        cout << "O(log n): Element found at index " << result << endl;
    else
        cout << "O(log n): Element not found" << endl;

    return 0;
}
