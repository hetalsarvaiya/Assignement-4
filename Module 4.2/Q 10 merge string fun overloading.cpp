// Write a program to concatenate the two strings using Operator Overloading 

#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class A
{
	public :
		string num;
		A(string i)
		{
			num=i;
		}
		//passing object to function
		void operator +(A obj)
		{
			cout<<num+obj.num;
		}
};
main()
{
    A obj1("hello ");
	A obj2("world");
	
	obj1+obj2;
	
	cout<<"\n";
	system("pause"); 
}
