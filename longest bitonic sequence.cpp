#include <iostream>
using namespace std;

int lis(int* input, int n){
	int* output = new int[n];
	output[0] = 1;
	for(int i = 1; i < n; i++){
		output[i] = 1;
		for(int j = i-1; j >= 0; j--){
			if(input[j] <= input[i])
			continue;
			
			int possibleAns = output[j] + 1;
			if(possibleAns > output[i])
			output[i] = possibleAns;
		}
	}
	int best = 0;
	for(int i = 0; i < n; i++)
	if(best < output[i])
	best = output[i];
	delete []output;
	return best;
}

int lds(int* input, int n){
	int* output = new int[n];
	output[0] = 1;
	for(int i = 1; i < n; i++){
		output[i] = 1;
		for(int j = i-1; j >= 0; j--){
			if(input[j] >= input[i])
			continue;
			
			int possibleAns = output[j] + 1;
			if(possibleAns > output[i])
			output[i] = possibleAns;
		}
	}
	int best = 0;
	for(int i = 0; i < n; i++)
	if(best < output[i])
	best = output[i];
	delete []output;
	return best;
}

int lbs(int* input, int n){
	int best = 0;
	int* output = new int[n];
	for(int k = 0; k < n; k++){
		int i = lis(input+k, n-k);
	    int d = lds(input+k, n-k);
	    output[k] = i+d-1; 
	}
	for(int k = 0; k < n; k++){
		if(best < output[k])
		best = output[k];
	}
	delete []output;
	return best;
}

int main(){
	int n;
	int* input = new int[n];
	cin >> n;
	for(int i = 0; i < n; i++)
	cin >> input[i];
	//cout << lis(input, n) << endl;
	//cout << lds(input, n) << endl;
	cout << lbs(input, n) << endl;
	delete []input;
	return 0;
}
