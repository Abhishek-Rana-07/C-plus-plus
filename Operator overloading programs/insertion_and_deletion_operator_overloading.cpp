#include<iostream>
using namespace std;
class Distance{
     private:
        int feet;
        int inches;
    public:
       friend void operator>>(istream &input,Distance &D)
       {
           input >> D.feet >>D.inches;
        } 

        friend void operator<<(ostream &output,Distance &D)
        {
            output<<"FEET: "<< D.feet<<"INCHES: "<<d.inches;
        }
};
int main()
{
    Distance D1;

    cin >> D1;
    cout << D1;
    return 0;
}
