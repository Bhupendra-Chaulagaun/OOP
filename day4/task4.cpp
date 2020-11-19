#include<iostream>
#include<cmath>
using namespace std;
class rectangular
{
float x,y;
public:
rectangular()
{
cout<<"Enter rectangular co-ordinates(x,y)"<<endl;
cin>>x>>y;
}
float returnx()
{
return x;
}
float returny()
{
return y;
}
};


class polar
{
float r,theta;
public:
polar()
{
r=0;theta=0;
}
polar(rectangular p)
{
r=sqrt(pow(p.returnx(),2)+pow(p.returny(),2));
theta=atan(p.returny()/p.returnx());
}
void showdata()
{
cout<<"The coordinate in polar system(r,theta) is"<<endl;
cout<<"("<<r<<","<<theta<<")";
}
};



int main()
{
rectangular rect;
polar pol;
pol=rect; //pol.polar(rect);
pol.showdata();
return 0;
}
