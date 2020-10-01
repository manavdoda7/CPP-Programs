#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=1; j<2*i+2; j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1; j<2*i; j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
}
