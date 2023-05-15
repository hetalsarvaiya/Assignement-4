
// Write a program of Addition, Subtraction, Division, Multiplication using constuctor.

#include<iostream>
using namespace std;
class A
{
	public :
		int a,b;
		float sum,sub,mul,div;
		//constructor throgh the value display of a & b
		A()
		{
			cout<<"enter the number of A : ";
			cin>>a;
			cout<<"enter the number of B : ";
			cin>>b;
			
			sum=a+b;
			sub=a-b;
			mul=a*b;
			div=a/b;
		}
	    void print_value()
		{
		    cout<<"\nsum of two values : "<<sum;
			
			cout<<"\nsub of two values : "<<sub;
						
			cout<<"\nmul of two values : "<<mul;
			
			cout<<"\ndiv of two values : "<<div;
		}
};
main()
{
	A a1;
	a1.print_value();
}

