
// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member 
// salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance).

#include<iostream>
using namespace std;
//base class person
class person
{
	protected : 
	char name[10];
	int age;
	
	public :
		void get_details()
	{
		cout<<"\n\nenter name : ";
		cin>>name;
		cout<<"enter age : ";
		cin>>age;
	}
}; 
//inherit class person 
class student : public person
{
	public :
	int m1,m2,m3,total;
	float per;
	
	void get_marks(int a,int b,int c)
	{
		m1 = a;
		m2 = b;
		m3 = c;
	}
	void cal_data()
	{
		total = m1+m2+m3;
	}
	void get_per()
	{
		per = total/3;
	}
	void print_data()
	{
		cout<<"\nName is :"<<name;
	 	cout<<"\nAge is : "<<age;
	 	cout<<"\nTotal marks is : "<<total;
	 	cout<<"\nPercentage is : "<<per;
	}
};
//inherit class person 
class teacher : public person
{
	public :
		float salary;
		void get_salary()
		{
			cout<<"enter salary : ";
		    cin>>salary;
		}
		void print_data()
		{
			cout<<"\nName is :"<<name;
	 	    cout<<"\nAge is : "<<age;
	 	    cout<<"\nSalary is : "<<salary;
	 	}
};
main()
{
	student s1;
	s1.get_details();
	s1.get_marks(50,70,80);
	s1.cal_data();
	s1.get_per();
	s1.print_data();
	
	teacher t1;
	t1.get_details();
	t1.get_salary();
	t1.print_data();
}
