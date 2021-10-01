#include<iostream>
using namespace std;
int main()
{
	int i,j,n; cin>>n;
	for(i=0;i<3*n;i++)
	{
		for(j=6*n;j>=2*i;j--) cout<<" ";
		for(j=0;j<=i;j++) cout<<"/";
		for(j=0;j<2*i;j++) 
			if(i<2*n) cout<<" ";
			else cout<<"_";
		for(j=0;j<=i;j++) cout<<"/"; cout<<endl;
	}
}
