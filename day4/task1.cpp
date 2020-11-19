


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
Distance(float meter)
{
float temp = 3.2808 *meter;
feet = int(temp);
inch = 12*(temp-feet);
}

void showdata()
{
cout<<"The distance in feet and inch is: "<<endl;
cout<<feet<<"f "<<inch<<"i";
}
};
int main()
{
Distance d;
float meters;
cout<<"Enter distance in meters: ";
cin>>meters;
d = meters; 
d.showdata();
return 0;
}
