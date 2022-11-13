#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	char Choice;
	int rand(),ans,sum;
	int A,B;

	do{
	
	for(A=0;A<5;A++){
		B=(rand()%10)+1;
		cout<<B<<" + ";	
		sum += B;
	
	}
	cout<<"= ";
	cin>>ans;
	if(sum==ans){
		cout<<"Correct!";
		
	}
	else{
		cout<<"Sorry...The Correct answer is "<<sum;
	}
	cout<<"\nDo you want to try again? ";
	cin>>Choice;
	}while(Choice=='Y'||Choice=='y');
}
