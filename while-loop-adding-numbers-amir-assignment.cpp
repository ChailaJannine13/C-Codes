#include<iostream>
#include<conio.h>
using std::cin;
using std::endl;
using std::cout;
int main(){	
//Trying to let the user solve all of the math problems by getting all of the users input
	int num1=20;
	int num2=30;
	int num3=5;
	int num4=15;
	int num5=2;
//giving the user a random number to solve in program
	int sum,sum1,sum2,sum3,sum4;
	int answer,answer1,answer2,answer3,answer4;
//giving each answers and sum a different variable
       	int wew=0;
//using a while loop and if statements to see if the users answer was correct
	while(wew<1){
		sum=num1+num2;
		cout<<"What is "<<num1<<"+"<<num2<<" ? :";
		cin>>answer;
		wew++;
//using if statement to check if the user is correct if not it shows the right answer
		if(answer==sum)
		cout<<"Correct";
		else
		cout<<"wrong the right answer is "<<sum;
		}
		int wew1=0;
//using a while loop and if statements to see if the users answer was correct
	while(wew1<1){
		sum1=num2+num3;
		cout<<"\nWhat is "<<num2<<"+"<<num3<<" ? :";
		cin>>answer1;
		wew1++;
//using if statement to check if the user is correct if not it shows the right answer
		if(answer1==sum1)
		cout<<"Correct";
		else
		cout<<"wrong the right answer is "<<sum1;}
		int wew2=0;
//using a while loop and if statements to see if the users answer was correct
	while(wew2<1){
		sum2=num4+num5;
		cout<<"\nWhat is "<<num4<<"+"<<num5<<" ? :";
		cin>>answer2;
		wew2++;
//using if statement to check if the user is correct if not it shows the right answer
		if(answer2==sum2)
		cout<<"Correct";
		else
		cout<<"wrong the right answer is "<<sum2;}
		int wew3=0;
//using a while loop and if statements to see if the users answer was correct
	while(wew3<1){
		sum3=num5+num3;
		cout<<"\nWhat is "<<num5<<"+"<<num3<<" ? :";
		cin>>answer3;
		wew3++;
//using if statement to check if the user is correct if not it shows the right answer
		if(answer3==sum3)
		cout<<"Correct";
		else
		cout<<"wrong the right answer is "<<sum3;}
		int wew4=0;
//using a while loop and if statements to see if the users answer was correct
	while(wew4<1){
		sum4=num1+num3;
		cout<<"\nWhat is "<<num1<<"+"<<num3<<" ? :";
		cin>>answer4;
		wew4++;;
//using if statement to check if the user is correct if not it shows the right answer
		if(answer4==sum4)
		cout<<"Correct";
		else
		cout<<"wrong the right answer is "<<sum4;}		
	getch();
	return 0;
}
