#include <iostream>
#include <string>
using namespace std;

int alpha_Code(int n, int* p){
	if(n == 0 || n ==1) return 1;
	int output = alpha_Code(n-1, p);
	if(p[n-2]*10 + p[n-1] <= 26)
	output += alpha_Code(n-2,p);
	return output;
}

int alpha_Code2(int n, int* p){
	if(n == 0 || n ==1) return 1;
	int* help = new int[n+1];
	delete []help;
	if(help[n] > 0)
	return help[n];
	int output = alpha_Code(n-1, p);
	if(p[n-2]*10 + p[n-1] <= 26)
	output += alpha_Code2(n-2,p);
	help[n] = output;
	return output;
	delete []help;
}

int alpha_Codei(int n, int* p){
	int* output = new int[n+1];
	output[0] = output[1] = 1;
	for(int i = 2; i < n+1; i++){
		output[i] = output[i-1];
		if(p[i-2]*10 + p[i-1] <= 26)
		output[i] += output[i-2];
	}
	int ans = output[n];
	delete []output;
	return ans;
}

int main(){
	int n;
	cin >> n;
	int* p = new int[n];
	for(int i = 0; i < n; i++)
	cin >> p[i];
	cout << alpha_Code(n,p) << endl;
	cout << alpha_Code2(n,p) << endl;
	cout << alpha_Codei(n,p) << endl;
	return 0;
}
