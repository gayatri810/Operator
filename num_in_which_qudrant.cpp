//Gayatri Apotikar
//23070123055
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter coordinates of x and y: "<<endl;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"First quadrant "<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Fourth quadrant "<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Third quadrant "<<endl;
    }
    else
    {
        cout<<"Second quadrant "<<endl;
    }
}