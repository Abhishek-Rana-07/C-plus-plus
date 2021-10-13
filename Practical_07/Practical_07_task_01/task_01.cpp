// Manual implementation of date using switch case.
#include<iostream>
using namespace std;
int main()
{
    int n;
    do{
       cout<<"Enter your choice:\n  1.YEAR\n  2.Month\n  3.Date\n  4.Day\n  0.Exit"<<endl;
        cin>>n;
      switch(n){
         case 1:
              cout<<"2021"<<endl;
              break;
         case 2:
              cout<<"October"<<endl;
              break;
         case 3:
              cout<<"13"<<endl;
              break;
         case 4:
               cout<<"Wednesday"<<endl;
               break;
         case 0:
               return 0;
               break;
         default:
              cout<<"Invalid choide\n";
              break;
      }
    }while(n);
    return 0;
}
