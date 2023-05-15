// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display Data (Single inheritance).

#include<iostream>
using namespace std;
///base class cricketer
class cricketer
{
	public :
		char name[10];
		   int total_run,total_ball,h,d,k;
		   float total_avg;
			void get_detail()
			{
				total_run;
				total_ball;
				total_avg;
			}
			
};
//inherit the class batsman to class cricketer
class batsman : public cricketer
{
	public : 
 
	    void get_data1()
	        {
	            cout<<"\nenter the name : ";
		        cin>>name;
		        cout<<"enter the total_run : ";
		        cin>>total_run;
		        h=total_run;
		        cout<<"enter the total_ball : ";
	         	cin>>total_ball;
	         	total_avg = total_run/total_ball;
	         	display_data();
	        }
	    void get_data2()
	        {
	            cout<<"\nenter the name : ";
		        cin>>name;
		        cout<<"enter the total_run : ";
		        cin>>total_run;
		        k=total_run;
		        cout<<"enter the total_ball : ";
	         	cin>>total_ball;
	         	total_avg = total_run/total_ball;
	         	display_data();
	        }
	    void get_data3()
	        {
	            cout<<"\nenter the name : ";
		        cin>>name;
		        cout<<"enter the total_run : ";
		        cin>>total_run;
		        d=total_run;
		        cout<<"enter the total_ball : ";
	         	cin>>total_ball;
	         	total_avg = total_run/total_ball;
	        }
	        
	        void best_performance()
	        {
	        	if(h>k && h>d)
	        	{
	        		cout<<"\nbest_prformance is h";
				}
				else if(k>h && k>d)
				{
					cout<<"\nbest_prformance is k";
				}
				else if(d>h && d>k)
				{
					cout<<"\nbest_prformance is d";
				}
				else
				{
					cout<<"please correct data";
				}
			}
	 
	       void display_data()
	      {
	 	     cout<<"Name :"<<name;
	 	     cout<<"\ntotal run is : "<<total_run;
	 	     cout<<"\ntotal ball is : "<<total_ball;
	 	     cout<<"\naverage : "<<total_avg;
	     }	 
};
main()
{
	batsman b1;
    b1.get_data1();
    b1.get_data2();
    b1.get_data3();
    b1.display_data();
    b1.best_performance();
}
