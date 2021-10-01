#include<iostream>
#include<cmath>
using namespace std;

float gmt_sum(float n){
	if(n == 0) return 1;
	else return 1/float(pow(2,n))+gmt_sum(n-1);
}

int main(){
	float n;
	cin >> n;
	cout << gmt_sum(n);
	return 0;
}
