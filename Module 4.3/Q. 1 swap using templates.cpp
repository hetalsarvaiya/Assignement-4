//  Write a program of to swap the two values using templates 

#include<iostream>
using namespace std;
template <typename T>//class templets
class Swap
{
	public :
		T x,y;
		void input()//input the number
		{
			cout<<"enter the no :";
			cin>>x;
			cout<<"enter the no :";
			cin>>y;
			cout<<"Before the value of x: "<<x;
			cout<<"\nBefore the value of y: "<<y;
		}
		void display()//swap the two number after display
		{
			x=x+y;
	        y=x-y;
	        x=x-y;
	        cout<<"\nafter the value of x: "<<x;
	        cout<<"\nafter the value of y: "<<y;
		}
};
main()
{
	Swap <int>s1;//object creat using template
	s1.input();
	s1.display();
}
