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
	
	if(oper ==  '+')
	{
		cout<<"Result:"<<num1+b;
		return 0;
}

if(oper == '-')
{
	cout<<"Result:"<<num1-b;
}

if(oper == '*')
{
	cout<<"Result:"<<num1*b;
}
if (oper == '%')
{
	cout<<"Result'"<<num1%b;
}
if (oper == '/')
{
	cout<<"Result:"<<num1/b;
}
}
