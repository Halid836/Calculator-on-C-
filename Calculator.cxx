#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout<<"Calculator"<<endl;
	cout<<"num1"<<endl;
	int num1;
	cin>>num1;
	cout<<"num2"<<endl;
	int b;
	cin>>b;
	cout<<"Operation:";
	char oper;
	cin>>oper;
	
	switch(oper)
	{
		case '+' :
		cout<<"Result:"<<num1+b;
		break;
		
		case '-' :
		cout<<"Result:"<<num1-b;
		break;
		case '*' :
			cout<<"Result:"<<num1*b;
			break;
			
		case '%' :
			cout<<"Result'"<<num1%b;
			break;
			
		case '/' :
			cout<<"Result:"<<num1/b;
			break;
			
		default :
		cout<<"Error!";
		break;
			
			return 0;
}
}
