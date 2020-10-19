#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
	int temp[high];
	int i,j,k;
	i = low;
	j = mid+1;
	k=0;

	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
	}

	while(i<=mid)
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
	
	
	while(j<=high)
	{
		temp[k] = arr[j];
		j++;
		k++;
	}
	
	k=0;
	for(i=low; i<=high; i++)
	{
		arr[i] = temp[k];
		k++;
	}
}

void merge_sort(int arr[], int low, int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid+1, high);
		merge(arr, low, mid, high);
	}
}

int main()
{
	int N;
	cout<<"Enter the number of elements: ";
	cin>>N;

	int arr[N];
	for(int i=0; i<N; i++)
	{
		cout<<"Enter "<<i+1<<"th element: ";
		cin>>arr[i];
	}

	merge_sort(arr, 0, N-1);
	
	cout<<endl<<"Output: ";
	for(int i=0; i<N; i++)
		cout<<arr[i]<<" ";	
	cout<<endl;
}