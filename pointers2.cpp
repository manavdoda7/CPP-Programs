#include<iostream>
using namespace std;
int main()
{
	int n=33;
	int *p=&n;
	int r=*p;
	n*=2;
	cout<<n<<endl<<*p<<endl<<r<<endl<<&n<<endl<<p<<endl<<&r<<endl<<&p;
}
