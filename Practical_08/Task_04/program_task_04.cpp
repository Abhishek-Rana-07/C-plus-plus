//Find factorial of a number using function but not recurssion
#include<iostream>
using namespace std;
void fact(int n)
{
    if(n==0 || n==1)
    {
        cout<<"factorial is 1"<<endl;
    }
    else
    {
        int sum=1;
        while(n!=1){
            sum*=n;
            n--;
        }
        cout<<"factorial is "<<sum;
    }
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial is to be calculated"<<endl;
    cin>>n;
    fact(n);
}
