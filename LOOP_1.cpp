#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
//r= row
//c=column
void gotoxy(short r,short c){
	COORD Josh={r,c};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Josh);
}
void gotoxy1(int r,int c){
	if((r==c)||(r+c)==(5-1)){
	gotoxy(r,c);
	cout<<"*";}
	else{
	cout<<" ";
}
}
int main(){
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
		gotoxy1(row,col);
}
}
getch();
}
