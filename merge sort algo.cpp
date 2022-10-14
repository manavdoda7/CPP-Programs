#include<iostream>
using namespace std;

void merge(int p[], int si, int ei){
	int mid = (si+ei)/2, i, j;
	int p1[mid-si+1] ;
	int p2[ei-mid] ;
	for(i = 0; i < mid-si+1; i++)
	p1[i] = p[si+i];
	for(j = 0; j < ei-mid; j++)
	p2[j] = p[mid+j+1];
	i = 0; j = 0;
	int k = si;
	while(i < mid-si+1 && j < ei-mid){
		if(p1[i] <= p2[j])
		p[k] = p1[i++];
		else
		p[k] = p2[j++]; 
		k++;
	}
	while(i < mid-si+1){
		p[k] = p1[i++];
		k++;
	}
	while(j < ei-mid){
		p[k] = p2[j++];
		k++; 
	}
}

void merge_sort(int p[], int si, int ei){
	if(si >= ei) {
		return;
	}
	int mid = (si+ei)/2;
	merge_sort(p,si,mid);
	merge_sort(p,mid+1,ei);
	merge(p,si,ei);
}

int main(){
	int n;
	cin >> n;
	int* p = new int[n];
	for(int i = 0; i < n; i++){
		cin >> *(p+i);
	}
	merge_sort(p,0,n-1);
	for(int i = 0; i < n; i++){
		cout << *(p+i) << " ";
	}
	delete []p;
	return 0;
}
