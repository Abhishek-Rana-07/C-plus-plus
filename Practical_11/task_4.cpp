#include<iostream>
using namespace std;

class A{
   public:
      int k;
      void display(){
          cout<<"This is display method for base classs A"<<endl;
      }
};

class B: virtual public A{
    public:
    void display1(){
        cout<<"This is display1 method mfor class B"<<endl;
    }
};

class C: virtual public A{
    public:
    void display2(){
        cout<<"This is display2 method for class C"<<endl;
    }
};

class D: public B, public C{
    public:
    void display3(){
        cout<<"This is display3 methods for classs D"<<endl;
    }
};


int main()
{
    D d;
    d.display1();
   d.display2();
   d.display3();
    d.display();
}


