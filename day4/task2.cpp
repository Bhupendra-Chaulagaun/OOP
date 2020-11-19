#include<iostream>
using namespace std;
class Distance
{
private:
float feet;
float inch;
public:
Distance()
{
feet = 0.00;
inch = 0.00;
}
void getdata()
{
cout<<"Enter feet and inch: ";
cin>>feet >> inch;
}

operator float()
{
float m;
m = feet/3.2802 + inch/(12*3.2802);
return m;
}
};

int main()
{
Distance d;
float meters;
d.getdata();
meters = d; 
cout<<"The distance in meters is:"<<meters<<"m";
return 0;
}
