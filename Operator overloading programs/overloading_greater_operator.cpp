#include<iostream>
using namespace std;
class Test2;
class Test1{
    int A;
    public: 
       void getA(){
           cin>>A;
       }
    friend void operator>(Test1,Test2);
};
class Test2{
    int B;
    public: 
       void getB(){
           cin>>B;
       }
    friend void operator>(Test1,Test2);
};

void operator>(Test1 t1,Test2 t2)
{
    (t1.A > t2.B)? cout<<"A is greater" : cout<<"B is greater";
}
int main()
{
    Test1 t1;
    Test2 t2;

    t1.getA();
    t2.getB();

    t1 > t2;
}
