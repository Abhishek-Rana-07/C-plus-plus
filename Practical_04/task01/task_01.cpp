//Practical_04_Task01
#include<iostream>
using namespace std;
namespace First{
    int add(int a,int b)
    {
        return a+b;
    }
}
namespace Second{
    float add(float a,float b)
    {
        return a+b;
    }
}
int main()
{
    cout<<First::add(1,2)<<endl;
    cout<<Second::add(1.2,2)<<endl;
    cout<<First::add(1,2.1)<<endl;
    cout<<Second::add(1.1,2.1)<<endl;
    cout<<First::add(1.1,2.1)<<endl;
    cout<<First::add(0,0)<<endl;
   
}
