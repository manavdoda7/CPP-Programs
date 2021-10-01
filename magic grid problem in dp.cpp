#include <bits/stdc++.h>
using namespace std;

int option1 = 1;
int option2 = 1;

int min(int& a, int& b){
	if(a < b) return a;
	return b;
}

int min_power(int **input, int si, int sj, int ei, int ej){
	
	if(si == ei && sj == ej) 
	    return 1;
	if(si > ei || sj > ej)
	    return INT_MAX;
	    
	if(si == ei && sj < ej){
	    if(option2 < 1) return INT_MAX;
	    return option2;
	}
	
	if(sj == ej && si < ei){
	    if(option1 < 1) return INT_MAX;
	    return option1;
	}
	
	if(min_power(input,si+1,sj,ei,ej) < 1) return INT_MAX;
	else option1 = min_power(input,si+1,sj,ei,ej) - input[si+1][sj];
	if(min_power(input,si,sj+1,ei,ej) < 1) return INT_MAX;
	else option2 = min_power(input,si,sj+1,ei,ej) - input[si][sj+1];
	
	return min(option1, option2);
}

int min_power2(int **input, int si, int sj, int ei, int ej, int **output){
	
	if(si == ei && sj == ej) return 1;
	if(si > ei || sj > ej) return INT_MAX;
	if(output[si][sj] != 0) return output[si][sj];
	
	option1 = min_power(input,si+1,sj,ei,ej) - input[si+1][sj];
	option2 = min_power(input,si,sj+1,ei,ej) - input[si][sj+1];
	output[si][sj] = min(option1,option2);
	if(output[si][sj] < 1) output[si][sj] = INT_MAX;
	return output[si][sj];
}

int min_poweri(int **input, int si, int sj, int ei, int ej){
	
	int **dp = new int*[ei+1];
	for(int i = 0; i < ei+1; i++)
	    dp[i] = new int[ej+1];
	    
	dp[ei][ej] = 1;
	for(int i = ei-1; i>=si; i--){
	    dp[i][ej] = dp[i+1][ej] - input[i][ej];
	    if(dp[i][ej] < 1) dp[i][ej] = 1;
	}
	
	for(int j = ej-1; j>=sj; j--){
	    dp[ei][j] = dp[ei][j+1] - input[ei][j];
	    if(dp[ei][j] < 1) dp[ei][j] = 1;
	}
	
	for(int i = ei-1; i>=si; i--){
	    for(int j = ej-1; j>=sj; j--){
		    dp[i][j] = min(dp[i+1][j], dp[i][j+1]) - input[i][j];
		    if(dp[i][j] < 1) dp[i][j] = 1;
		}
	}
		    
	int ans = dp[si][sj];
	for(int i = 0; i <= ei; i++)
	delete []dp[i];
	delete []dp;
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int k = 0; k < n; k++){
		int r, c;
		cin >> r >> c;
		int** input = new int*[r];
		for(int i = 0; i < r; i++)
		    input[i] = new int[c]; 
		
		for(int i = 0; i < r; i++)
		    for(int j = 0; j < c; j++)
		        cin >> input[i][j];
		        
	    int** output = new int*[r];
		for(int i = 0; i < r; i++)
		    output[i] = new int[c];
	    for(int i = 0; i < r; i++)
		    for(int j = 0; j < c; j++)
		        output[i][j] = 0;
		        
		cout << min_power(input,0,0,r-1,c-1) << " ";
		cout << min_power2(input,0,0,r-1,c-1, output) << " ";
		cout << min_poweri(input,0,0,r-1,c-1) << endl;
		
		for(int i = 0; i < r; i++){
			delete []input[i];
			delete []output[i];
		}
		
		delete []input;
		delete []output;
	}
	return 0;
}
