#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(int i = 1 ; i <= n ; i++){
		    for(int j = 1 ; j < i ; j++){
		        cout<<" ";
		    }
		    for(int j = i ; j <= n ; j++){
		        if(j == i){
		            cout<<"*";
		        }
		        else if(i == 1){
		            cout<<"*";
		        }
		        else{
		            cout<<" ";
		        }
		    }
		    for(int j = i ; j < n ; j++){
		      if(i == 1)
		          cout<<"*";
		      else if(j == n-1)
		          cout<<"*";
		      else
		          cout<<" ";
		    }
		    cout<<"\n";
		}
}
	        