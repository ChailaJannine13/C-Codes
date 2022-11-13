#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	/*coi=cost of item
	  wbp=will be purchased
	  iap=inflation as percentage
	  ac=adjusted cost
	  ec=estimated cost
	  csoi=cost of an item*/
	float coi,wbp,wbp1,iap,ac,ec,csoi,csoi1,csoi5;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Enter the cost of item:$ ";cin>>coi;
	cout<<"Enter the number of layers that the item will be purchased: ";cin>>wbp;
	cout<<"Enter the rate of inflation as percentage: ";cin>>iap;
	//I devided the inflation rate to 100 to get the percentage
	ac=(iap/100)*coi;
	wbp1=wbp*ac;
	for(ec=0;ec<wbp1;ec++){
		ec=ec+0.25;	}
	cout<<"\n\t\t  Adjusted Cost is $ "<<ec;
	csoi1=ac*2;
    csoi5=csoi1+wbp1;
	for(csoi=0;csoi<csoi5;csoi++){
		csoi=csoi+0.25;	}
	cout<<"\n\t\t  The estimated cost of an item after 5 years is "<<csoi;
	
	getch();
	return 0;
}
