#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1,s2;
   cout<<"Enter the string s1"<<endl;
   getline(cin,s1);
   cout<<"Enter the string s2"<<endl;
   getline(cin,s2);
   int x=s1.compare(s2);
   if(x==0)
       cout<<"S1 is equal to s2"<<endl;
   else if(x>0)
       cout<<"S1 is greater than s2"<<endl;
   else
       cout<<"s1 is smaller than s2"<<endl;
   return 0;
}
