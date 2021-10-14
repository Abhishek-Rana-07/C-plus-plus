#include<iostream>
using namespace std;
int main()
{
    char a[4][4];
    for(char i=0;i<4;i++)
    {
        for(char j=0;j<4;j++)
        {
            if(i==j)
                a[i][j]='*';
            else if(j>i)
                a[i][j]='*';
            else
                a[i][j]=' ';
        }
    }
    cout<<"pattern printing"<<endl;
    for(char i=0;i<4;i++)
    {
        for(char j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

}
