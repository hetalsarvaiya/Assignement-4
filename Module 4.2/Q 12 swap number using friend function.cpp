//Write a program to swap the two numbers using friend function without using third variable

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
			cout<<"\nbefore swapping  a :"<<a<<"\n"<<"b : "<<b;
		}
		void display()
		{
			cout<<"\nafter swapping  a :"<<a<<"\n"<<"b : "<<b;
		}
		
	//declaration of friend function
	friend void swapno(A &obj);
};
//defination of friend function
void swapno(A &obj)
{
    obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
}
main()
{
     A obj;
     obj.get_data();
     swapno(obj);
     obj.display();
}
