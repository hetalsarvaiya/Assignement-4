
//(Multilevel Inheritance) 

#include<iostream>
using namespace std;
//base class student
class student
{
	protected :
		 int roll_no;
		 
		 public :
		 	void get_detail(int a)
		 	{
		 		roll_no = a;
			}
};
//inherit class test to class student
class test : public student
{
	protected :
		int maths,science;
	
		public :
			void get_marks(int x,int y)
			{
				maths = x;
				science = y;
			}
};
//inherit class resut to class test
class result : public test
{
	public : 
	
	int total;
	
	void get_total()
	{
		total = maths + science;
	}
	void print_data()
	{
		cout<<"\nRoll no is : "<<roll_no;
		cout<<"\nmaths marks : "<<maths;
		cout<<"\nscience marks is : "<<science;
		cout<<"\ntotal is : "<<total;
	}
};
main()
{
	result r1;
	r1.get_detail(12);
	r1.get_marks(62,91);
	r1.get_total();
	r1.print_data();
}
