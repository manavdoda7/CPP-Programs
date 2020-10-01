#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=0;i<2*n-1;i++)
	{
		if(i<n)
		{
			for(j=n;j>i;j--)
			cout<<" ";
			cout<<"*";
			for(j=0;j<i;j++)
			if(i)
			cout<<char(65+j)<<"*";
			cout<<"\n";
		}
		else
		{
			for(j=0;j<=i-n+1;j++)
			cout<<" ";
			cout<<"*";
			for(j=0;j<2*n-i-2;j++)
			cout<<char(65+j)<<"*";
			cout<<"\n";
		}
		
	}
}
