//Minimum height triangle
#include<iostream>
#include<math.h>
using namespace std;
double height(double area,double base)
{
    float h1=(2*area)/base;
    return h1;
}
int main()
{
    long b,a;
    //cout<<"Enter the base:"<<endl;
    cin>>b;
    //cout<<"Enter the area:"<<endl;
    cin>>a;
    double h=height(a,b);
    long hinteger=floor(h);
    //cout<<hinteger<<endl;
    double dec=h-hinteger;
    if(dec>0)
    {
    long h2=h+1;
    cout<<h2<<endl;
    }
    else
    {
    long h3=long(h);
    cout<<h3;
    }
    return 0;
}