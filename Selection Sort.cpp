#include <bits/stdc++.h>
using namespace std;
 // function for selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        // Finding the smallest element in array
        min = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min])
            min = j;
 
   // swap the minimum element and  first element of unsorted subarray   
     int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {23, 56, 9, 103, 77};
    int n = 5;
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
