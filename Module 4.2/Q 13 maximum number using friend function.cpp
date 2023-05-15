//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;
class A
{
	int a,b;
	public  :
		void get_data()
		{
			cout<<"enter the value of a : ";
			cin>>a;
			cout<<"enter the value of b : ";
			cin>>b;
		}
	//declaration of friend function
	friend void maxno(A &obj);
};
//defination of friend function
void maxno(A &obj)
{
	if(obj.a>obj.b)
	{
		cout<<"a is max";
	}
	else
	{
		cout<<"b is max";
	}
}
main()
{
     A obj;
     obj.get_data();
     maxno(obj);
}
