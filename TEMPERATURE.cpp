#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	double maxtemp,mintemp,diff;
	double temp[5];
	double sum,averagetemp;
	cout<<"Please input five different temperatures"<<endl;
	for(int l=0;l<5;l++){
		cin>>temp[l];
		sum+=temp[l]; 
	} 
	maxtemp=temp[0];
	mintemp=temp[0];
	for(int l=0;l<5;l++){
		if(temp[l]>maxtemp){
			maxtemp=temp[l];
		}
		if(temp[l]<mintemp){
			mintemp=temp[l];	
		}
	}
	cout<<"\nThe Hottest temperature is "<<maxtemp<<endl;
	cout<<"The Coldest temperature is "<<mintemp<<endl<<endl;
	diff=temp[0];
	for(int x=0;x<5;x++){
		diff=maxtemp-temp[x];
		cout<<"The difference betweeen "<<maxtemp<<" degree celcius and "<<temp[x]<<"degree celcius is "<<diff<<endl;
	}
	averagetemp=sum/5;
	cout<<"\nThe Average temperature is : "<<averagetemp;

	getch();
	return 0;
}
