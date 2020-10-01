#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0 || n == 1)
    	return 1;
   int* p = new int[n+1];
   delete []p;
	if(p[n] > 0)
    	return p[n];
	p[n] = fib(n-1) + fib(n-2);
	return p[n];
	delete []p;
}

int main(){
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}
