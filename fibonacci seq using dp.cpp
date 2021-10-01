#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0 || n == 1)
	    return 1;
	return fib(n-1) + fib(n-2);
}

int fib2(int n, int* p){
	if(n == 0 || n == 1)
    	return 1;
	if(p[n] > 0)
    	return p[n];
	return fib2(n-1,p) + fib2(n-2,p);
}

int fib_helper(int n){
	int* p = new int[n+1];
	for(int i = 0; i < n + 1; i++)
	p[i] = 0;
	return fib2(n,p);
	delete []p;
}

int fibi(int n){
	int* p = new int[n+1];
	p[0] = p[1] = 1;
	for(int i = 2; i < n+1; i++){
		p[i] = p[i-1] + p[i-2];
	}
	int output = p[n];
	delete []p;
	return output;
}

int fib3(int n){
	if(n == 0 || n == 1)
    	return 1;
    int* p = new int[n+1];
    /*for(int i = 0; i < n+1; i++)
    p[i] = 0;*/
    delete []p;
	if(p[n] > 0)
    	return p[n];
	p[n] = fib3(n-1) + fib3(n-2);
	return p[n];
	delete []p;
}

int main(){
	int n;
	cin >> n;
	cout << fib(n) << endl;
	cout << fib_helper(n) << endl;
	cout << fibi(n) << endl;
	cout << fib3(n) << endl;
	return 0;
}
