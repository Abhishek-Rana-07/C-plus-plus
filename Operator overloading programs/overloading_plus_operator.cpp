#include<iostream>
using namespace std;
class Testing{
    int a;
    int b;
    public:
        void setdata(int x,int y)
        {
           a=x;
           b=y;
        }
        void display(){
            cout<<"a :"<<a<<endl;
            cout<<"b :"<<b<<endl;
        }
        Testing operator+(Testing test){
            Testing temp;

            temp.a= a + test.a;
            temp.b= b + test.b;

            return temp;
        }

};
int main()
{
    Testing t1,t2,t3;
    t1.setdata(4,6);
    t2.setdata(8,9);

    t3= t1+t2;
    t3.display();
}
