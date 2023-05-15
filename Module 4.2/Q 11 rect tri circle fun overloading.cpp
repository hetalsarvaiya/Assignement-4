/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading Rectangle: Area * breadth , Triangle: ½ *Area* breadth , Circle: Pi * Area *Area */

#include<iostream>
using namespace std;
	//passing object to function
	double area(double r)
	{
	    return 3.14*r*r;
	}
	int area(int l,int w)
	{
		return l*w;
	}
	float area(float h,float b)
	{
		return 0.5*h*b;
	}

main()
{
	float b,h;
	int l,w;
	double r;
    	{
    		cout<<"enter the area of circle : ";
    		cin>>r;
    		cout<<"enter the length is rectangle : ";
    		cin>>l;
    		cout<<"enter the width is rectangle : ";
    		cin>>w;
    		cout<<"enter the bredth is triangle : ";
    		cin>>b;
    		cout<<"enter the height is triangle : ";
    		cin>>h;
	    	cout<<"area of circle is: "<<area(r);
	    	cout<<"\nrectangle is: "<<area(l,w);
	    	cout<<"\ntraingle is: "<<area(h,b);
		}
}
