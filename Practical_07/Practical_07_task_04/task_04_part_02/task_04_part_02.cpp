#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Before changing "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        int c=(a[i][2])/3;
        for(int j=0;j<3;j++)
        {
            a[i][j]=c;
        }
    }
    cout<<"After changing"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
