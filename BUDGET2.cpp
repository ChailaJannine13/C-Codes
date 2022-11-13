#include<iostream>
#include<conio.h>
using namespace std;
main(){
	float coi,wbp,wbp1,iap,ac,csoi1,csoi5,cs,csoi;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Enter the cost of item:$";cin>>coi;
	cout<<"Enter the number of layers that the item will be purchased:";cin>>wbp;
	cout<<"Enter the rate of inflation as percentage:";cin>>iap;
	ac=(iap/100)*coi;
	wbp1=wbp*ac;
    for(cs=-0.1;cs<wbp1;cs+=0.01);
    cout<<"\n\t\t  Adjusted Cost is $ "<<cs;
    csoi1=ac*2;
    csoi5=csoi1+wbp1;
    for(csoi=-0.1;csoi<csoi5;csoi+=0.01);
    cout<<"\n\t\t  The estimated cost of an item after 5 years is "<<csoi;
    
	getch();
	return(0);
}
