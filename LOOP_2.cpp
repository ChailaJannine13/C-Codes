#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
//r= row
//c=column
void gotoxy(short r,short c){
	COORD Josh={r,c};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Josh);
}
void repeater(int r,int c){
	gotoxy(r,c);
	cout<<"*";
}
int main(){
	for(int x=0;x<=9;x++){
		for(int y=0;y<=2;y++){
			repeater(x,y);
		}
		x=x+3;
	}
	getch();
}
