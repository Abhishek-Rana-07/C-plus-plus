//Write an Efficient code to check if a number is prime or not?
#include<iostream>
using namespace std;
int main()
{
	int N,c=0,i;
	cout<<"Enter the no. to be checked for prime:\n";
	cin>>N;
	for(i=2;i<N;i++)
	{
		if(N%i==0)
		{
			c++;
			break;
		}
	}
	if(N==0 ||N==1 || c!=0)
	{
		cout<<"Not a prime\n";
	}
	else
	   cout<<"Prime";
	
}
