#include<iostream>
using namespace std;

void swap(long long *a, long long *b){
	long long temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	long long a, b;
	cout<<"Enter two integers to be swapped: ";
	cin>>a>>b;
	swap(&a, &b);
	cout<<"Swapped values are: "<<a<<" "<<b<<endl;
}
