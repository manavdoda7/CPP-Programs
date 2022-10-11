#include<iostream>
using namespace std;

float hmn_sum(float n){
	if(n == 1) return 1;
	else return 1/n + (hmn_sum(n-1));
}

int main(){
	float n;
	cin >> n;
	cout << hmn_sum(n);
	return 0;
}
