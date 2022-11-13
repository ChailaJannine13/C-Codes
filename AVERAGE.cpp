#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
main(){
	int st,nd,rd;
	float average;
	//I used manipulator function  to show  2 decimal points that I got from the example on my lesson.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Enter the first grade: ";cin>>st;
	cout<<"Enter the second grade: ";cin>>nd;
	cout<<"Enter the third grade: ";cin>>rd;
	// getting the average of grades I have to get the sum of three grades added together and then I devided it by three.
	average=(st+nd+rd)/3;
    cout<<"\n\t\t\tThe average is "<<average;
    //This determines whether the grade "PASSED" or "FAILED" by using if and elif functions.
    if(average>75.00){
    	cout<<"\n\t\t\tPASSED";
	}
	else if(average==75.00){
    	cout<<"\n\t\t\tPASSED";
	}
	else 
		(cout<<"\n\t\t\tFAILED");
	

    getch();
	return(0);
}
