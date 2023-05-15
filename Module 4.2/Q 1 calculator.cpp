
//  WAP to create simple calculator using class. 

#include<iostream>
using namespace std;
class cal
{
	public :
		
		float a,b,sum,sub,mul,div;
		//values of a and b
		void get_value()
		{
			cout<<"\n enter the value of A :" ;
			cin>>a;
			
			cout<<"\n enter the value of B :" ;
			cin>>b;
			
		sum=a+b;
		sub=a-b;
		mul=a*b;
	    div=a/b;
	    
       }
    	//print the value
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
	cal Calculater;
	
	Calculater.get_value();
	Calculater.print_value();
	
}
