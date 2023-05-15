// Write a program of to sort the array using templates. 

#include<iostream>
using namespace std;
template <class T>
class Sort//using class template
{
	public:
		T a[10];
		int i,temp,j;
		void input()//input 10 value using array
		{
			for(i=0;i<10;i++)
			{
			cout<<"enter the ten values : ";
			cin>>a[i];
			}
     	} 
     	void display()//swapping the value
     	{
     		for(i=0;i<10;i++)
     		{
     		   for(j=i+1;j<10;j++)
				{
					if(a[j]<a[i])
					{
						temp=a[j];
						a[j]=a[i];
						a[i]=temp;
					}
				}	
			}
			for(i=0;i<10;i++)
			{
				cout<<"\nSotlist of array : "<<a[i];
			}
	    }
	    
};
main()
{
	Sort <int>s1;//object creat using template
	s1.input();
	s1.display();
}
