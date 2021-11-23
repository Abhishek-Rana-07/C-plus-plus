//Find factorial of a number using recurssion
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    
    return n*fact(n-1);
    
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial is to be calculated"<<endl;
    cin>>n;
    cout<<"factorial of a number is "<< fact(n);
}
