
#include <iostream>
#include<conio.h>
#include<cmath>
using namespace std;
double findVolume();
double findArea();
int main()
{
    double x,y,h,area,volume;
 cout<<" Enter x : ";
 cin>>x;
 cout<<" Enter y : ";
 cin>>y;
 cout<<" Enter h : ";
 cin>>h;
 cout<< " Area = "<<area<<endl;
 cout<< " volume = "<<volume<<endl;
    getch();
    return 0;
}
double findvolume(double)
{
  double x,y,h,volume;
  volume=x*y*h;
}
double findArea(double)
{
  double x,y,h,area;

area=2*((x*y)+(h*y)+(x*h));
}
