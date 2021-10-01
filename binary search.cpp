#include<iostream>
using namespace std;

int index(int* p, int si, int ei, int key){
	if(si > ei) return -1;
	int mid = (si+ei)/2;
	if(p[mid] == key) return mid;
	if(p[mid] > key){
		return index(p,si,mid-1,key);
	}
	else return index(p,mid+1,ei,key);
}

int main(){
	int n, key;
	cin >> n;
	int* p = new int[n];
	for(int i = 0; i < n; i++)
	cin >> p[i];
	cin >> key;
	cout << index(p,0,n-1,key);
	delete []p;
	return 0;
}
