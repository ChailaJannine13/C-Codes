#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<direct.h>
#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool ValidPass(char password[]);

int main(){
	const int size=255;
	char password[size];
	
	cout<<"this is a password validator : "<<endl<<endl;
	cout<<"enter password with minimum or six characters in lenght "<<endl;
	cout<<"and at least one upper and lowercase letter "<<endl;
	cout<<"and at least one digit and one special character"<<endl;
	cin>>password;
	cout<<"\n";
	
	while(ValidPass(password)==false){
	cout<<"this is a password validator : "<<endl<<endl;
	cout<<"enter password with minimum or six characters in lenght "<<endl;
	cout<<"and at least one upper and lowercase letter "<<endl;
	cout<<"and at least one digit and one special character"<<endl;
	cin>>password;
	cout<<"\n";
		
	}
	cout<<"congratulation! password is correct...";
	return 0;
	
}
bool ValidPass(char password[]){
	
	int count;
	bool uc=false;
	bool lc=false;
	bool digit=false;
	bool flag=false;
	bool length=true;
	
	if(strlen(password)<6) pwd.length() pwd.size()
	{
		
		cout<<"password is too short please try again! "<<"\n\n";
		length=false;
	}
	
	for( count = 0; count<=strlen(password);count++){
		if(isupper(password[count]))
		if ascii(pwd[count]>=65 && ascii (pwd[count])<=90)A..Z
		uc=true;
		
	}
		for( count = 0; count<=strlen(password);count++){
		if(islower(password[count]))
		if ascii(pwd[count]>=97 && ascii (pwd[count])<=122)A..Z
		lc=true;
		
	}
	for( count = 0; count<=strlen(password);count++){
		if(isdigit(password[count]))
		digit=true;
	}
	
	if(uc==false)
	    cout<<"password has no uppercase character, please try again! "<<"\n\n";
   else if(lc==false)
	    cout<<"password has no lowercase character, please try again! "<<"\n\n";
   else if(digit==false)
	    cout<<"password has no numeric character, please try again! "<<"\n\n";
	
	if(uc==true && lc==true&& digit==true && length==true)
	flag=true;
	
	
	return flag;
		
}
