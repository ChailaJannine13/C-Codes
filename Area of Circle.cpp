#include<iostream>
#include<math.h>
using namespace std;
double circle(double radius);
double triangle(double base,double area);
double square(double side);
double rectangle(double area, double width);
int main(){
	double p,r,area,b,height,s,side,w,length;

	cout<<"Enter an integer for radius : ";
	cin>>r;
	area=circle(r);
	cout<<"The area of Circle is "<<area;
	cout<<"\nEnter the base to get Triangle height : ";
	cin>>b;
	height=triangle(b,area);
	cout<<"Height of a triangle is "<<height;
	cout<<"\nEnter the side of your Square : ";
	cin>>s;
	side=square(s);
	cout<<"The area of your Square is  "<<side; 
	cout<<"\nEnter the Width of your Rectangle : ";
	cin>>w;
	length=rectangle(area,w);
	cout<<"The length of your Rectangle is "<<length;
}
double circle(double radius){
	double area;
	double pi=3.14159265359;
    double	r=radius;
    r=pow(r,2);
	area=pi*r;
	return area;
}
double triangle(double base,double area){
	base=(area/base)*2;
	return base;
}
double square(double side){
	side=pow(side,2);
	return side;
}
double rectangle(double area,double width){
	double length;
	length=area/width;
	return length;
}

