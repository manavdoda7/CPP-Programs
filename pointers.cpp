#include<iostream>
int main()
{
	int n=5;
	int *p;
	*p=&n;
	std::cout<<n<<*p<<p<<&n;
}
