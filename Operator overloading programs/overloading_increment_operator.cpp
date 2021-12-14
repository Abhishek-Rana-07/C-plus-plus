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
        Testing operator++(){
            Testing temp;

            temp.a= ++a;
            temp.b= ++b;

            return temp;
        }
        Testing operator++(int){
            Testing temp;

            temp.a= a;
            temp.b= b;

            a++;
            b++;

            return temp;
        }

};
int main()
{
    Testing t1,t2,t3;
    t1.setdata(4,6);
    t2.setdata(8,9);
    
    t3=++t1;
    t3.display();
    t1.display();
    
    t3=t1++;
    t3.display();
    t1.display();
}
