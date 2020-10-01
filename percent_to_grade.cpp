#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your score";
	cin>>n;
	switch(n/10)
	{
		case 10:
		case 9:
			cout<<"A"<<10;
			break;
		case 8:
			cout<<"B";
			break;
		case 7:
			cout<<"C";
			break;
		case 6:
			cout<<"D";
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout<<"F";
			break;
		default:
			cout:"Score out of range";
			
	}
}
