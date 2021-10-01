//Linear Search in C++

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int searchKey) {

    /*
    Approach:
    Traversing through the array and comparing each element of array with the element to be searched.
    */

    for (int i=0;i<n;++i){
        if(arr[i] == searchKey) return i;
    }

    return -1; // When element is not found in the array
}

int main() {
    int arr[] = {25, 42, 0, 14, 90, 2}; // Intialising an array
    int elementToSearch = 14;
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    int foundAtIndex = search(arr, sizeOfArray, elementToSearch);

    if(foundAtIndex == -1)cout << "Element not found";
    else cout << "Element found at index: " << foundAtIndex;
}
