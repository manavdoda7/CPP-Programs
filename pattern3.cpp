#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n-i;j++) cout<<" "; cout<<"*";
		if(i<n) for(j=0;j<i;j++) cout<<"**"; cout<<endl;
		}
		else{
			for(j=0;j<2*n-i-2;j++) cout<<"*";
			for(j=0;j<4*(i-n)+3;j++) cout<<" ";
			for(j=0;j<2*n-i-1;j++) cout<<"*"; cout<<endl;
		}
	}	
}
