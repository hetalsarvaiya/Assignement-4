//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and 
// Function Overloading

#include<iostream>
using namespace std;
class A
{
	public :
		int i;
		A(int num)
		{
			i=num;
		}
		//function overloading
		void operator +(A obj)
		{
			cout<<"Addition is : "<<i+obj.i;
		}
		void operator -(A obj)
		{
			cout<<"\nSub is : "<<i-obj.i;
		}
		void operator *(A obj)
		{
			cout<<"\nMul is : "<<i*obj.i;
		}
		void operator /(A obj)
		{
			cout<<"\nDiv is : "<<i/obj.i;
		}
};
main()
{
	A obj1(25);
	A obj2(5);
	obj1+obj2;
	obj1-obj2;
	obj1*obj2;
	obj1/obj2;
}
