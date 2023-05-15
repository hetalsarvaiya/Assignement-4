
// Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;
class A
{
	public :
		int a,b,c,value;
		float ans;
		    
			void get_data()
			{
				cout<<"enter value of A : ";
				cin>>a;
				cout<<"enter value of B : ";
				cin>>b;
				ans=a*b;
			}
			void print_data()
			{
		     	cout<<"\nMultiplication two value : "<<ans;	
			}
			//assign the cube value
			void cal_cube()
	        {
	        	cout<<"\nenter value of C : ";
				cin>>c;
	  	        value = c*c*c;
	  	        cout<<"\nCubic value is : "<<value;
	        }
};
main()
{
	A a1;
	a1.get_data();
	a1.print_data();
	a1.cal_cube();
}
