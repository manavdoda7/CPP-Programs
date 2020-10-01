#include<iostream>
using namespace std;
int main()
{
	enum semester{spring=1, fall=1, summer	}s1,s2;
	s1=spring;
	s2=fall;
	if(s1!=s2) cout<<"Diffrent semesters";
	else cout<<"Same Semesters";
}
