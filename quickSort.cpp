#include<iostream>
using namespace std;

void swap(int arr[], int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

int partition(int arr[], int x, int y)
{
	int pivot = x;
	int low = x+1;
	int high = y;

	while(low<=high)
	{
		while(arr[pivot] > arr[low])
			low++;
		while(arr[pivot] < arr[high])
			high--;
		if(low<high)
			swap(arr, low, high);
	}
	swap(arr, high, pivot);

	return high;
}

void quick_sort(int arr[], int x, int y)
{
	int p;
	if(x<y)
	{
		p = partition(arr, x, y);
		quick_sort(arr, x, p-1);
		quick_sort(arr, p+1, y);
	}
}

int main()
{
	long n;
	cout<<"Enter the total number of elements: ";
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<"th element: ";
		cin>>arr[i];
	}
	int x = 0;
	int y = n-1;
	quick_sort(arr, x, y);
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i];
	cout<<endl;
}