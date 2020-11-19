#include<iostream>
#include<cmath>
using namespace std;
class polar
{
private:
float r,theta;
public:
polar()
{
r=0;theta=0;
}
polar(float rad,float ang)
{
r=rad;
theta=ang;
}
void showdata()
{
cout<<"The co-ordinate in polar form(r,theta) is"<<endl;
cout<<"("<<r<<","<<theta<<")";
} };


class rectangular
{
private:
float x,y;
public:
rectangular()
{
cout<<"Enter co-ordinate in cartesian system(x,y)"<<endl;
cin>>x>>y;
}

operator polar()
{
float rad,ang;
rad=sqrt(x*x+y*y);
ang=atan(y/x);
return polar(rad,ang);
}
};


int main()
{
polar pol;
rectangular rect;
pol=rect; 
pol.showdata();
return 0;
}
