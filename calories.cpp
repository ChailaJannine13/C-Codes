#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double calories;
	double x=1;
	double sum=0;
	double NumCal;
	cout<<"Please Enter the calorie intake this day : ";
	cin>>calories;
	
	while(x<=calories){
		
		cout<<"Please type in the number of calories :";
		cin>>NumCal;
		cout<<endl;
		sum+=NumCal;
		x++;
	}
	cout<<"the total calories that you have gain this day is "<<sum;
	
	
	getch();
	return 0;
}
