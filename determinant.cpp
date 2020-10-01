#include<iostream>
#include<math.h>
using namespace std;
int det(int A[10][10], int n)
{
	int i,j,k;
	if(n==0) return 0;
	else if(n==1) return A[0][0];
	else if(n==2) return A[1][1]*A[0][0]-A[1][0]*A[0][1];
	else{
		int det1=0,sub[10][10],b=0,x=0,y=0,n1;
		n1=n-1;
		for(k=0;k<n;k++){
			for(i=1;i<n;i++){
				for(j=0;j<n&&!k;j++){
					sub[y][x]=A[i][j];
					cout<<sub[0][0]<<"\t"<<sub[0][1]<<"\t"<<sub[1][0]<<"\t"<<sub[1][1];
					x++;
				}
				y++;
			}
			cout<<sub[0][0]<<"\t"<<sub[0][1]<<"\t"<<sub[1][0]<<"\t"<<sub[1][1]<<endl;
			det1+=pow(-1,k)*A[0][k]*det(sub,n1);
		}
		cout<<sub[0][0]<<"\t"<<sub[0][1]<<"\t"<<sub[1][0]<<"\t"<<sub[1][1];
		return det1;
	}
}


int main()
{
	int i,j,n;
	cout<<"Enter order of matrix: "; cin>>n;
	int A[10][10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>A[i][j];
			cout<<A[i][j]<<"\t";						//1 0 0 0 1 0 0 0 1
		} 
		cout<<endl;
	}
	
	cout<<det(A,n);
}
