//Practical_04_Task03
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
using namespace Second;
int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.2,2)<<endl;
    cout<<add(1,2.1)<<endl;
    cout<<add(1.1,2.1)<<endl;
    cout<<add(0,0)<<endl;
   
}


