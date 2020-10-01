#include<iostream>
using namespace std;
enum semester{spring, fall, summer};
int main()
{
	semester s1=spring, s2=spring;
	if(s1==s2) cout<<"same semester";
	else cout<<"Diffrent semester";
}
