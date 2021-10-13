//Automatic printing of date using switch case
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n;
	time_t curr_time;
	curr_time = time(NULL);

	string tm = ctime(&curr_time);
	do{
	  cout<<"Enter your choice\n  1.YEAR\n  2.Month\n  3.DATE\n  4.DAY\n  0.Exit\n"<<endl;
	  cin>>n;
	  switch(n)
	  {
	      case 1:
	           for(int i=20;i<=23;i++)
	              cout<<tm[i];
	           cout<<endl;
	           break;
	      case 2:
	           for(int i=4;i<=6;i++)
	              cout<<tm[i];
	           cout<<endl;
	           break;
	      case 3:
	            for(int i=8;i<=9;i++)
	              cout<<tm[i];
	           cout<<endl;   
	           break;
	      case 4:
	           for(int i=0;i<=2;i++)
	              cout<<tm[i];
	           cout<<endl;
	           break;
	           
	      case 0:
	           return 0;
	           break;
	      default:
	           cout<<"Invalid choice"<<endl;
	    }
	}while(n);
	return 0;
}
