//Gayatri Apotikar
//23070123055
#include<iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, sub4, sub5, t;
    float p;
    cout<<"enter marks of a student: "<<endl;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    t = sub1+sub2+sub3+sub4+sub5;
    p = (t/500.0)*100;

    if(p>=90)
    {
        cout<<"O+";
    }
    else if(p>80)
    {
        cout<<"A";
    }
    else if(p>70)
    {
        cout<<"B";
    }
    else if(p>60)
    {
        cout<<"C";
    }
    else if(p>50)
    {
        cout<<"D";
    }
    else
    {
        cout<<"Fail";
    }
}

/*Output 
enter marks of a student: 
90 85 96 70 88 
A   */