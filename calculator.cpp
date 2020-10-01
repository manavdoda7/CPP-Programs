#include<iostream>
using namespace std;

int main(){
	double a,b;
	char c;
	cout<<"Enter two integers: ";
	cin>>a>>b;
	cout<<"Enter the operation you want to perform: ";
	cin>>c;
	switch(c){
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			if(b==0) {
				cout<<"Infinite\n";
				break;
			}
			cout<<a/b<<endl;
			break;
		case '%':
			if(b==0){
				cout<<"Invalid operation, second int can't be zero\n" ;
				break;
			}
			cout<<int(a)%int(b)<<endl;
			break;
		default:
			cout<<"Invalid operand entered"<<endl;
	}	
}
