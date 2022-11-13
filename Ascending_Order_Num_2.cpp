#include<iostream> 
 
using namespace std;  

int findSmallest (int[],int);  

int main ()  
{  
    int myarray[5] = {5, 25, 41, -2, 0};  
    int pos,temp;  
    cout<<"Array List : ";  
    for(int i=0;i<5;i++)  
    {  
        cout<<myarray[i]<<"  ";  
    }cout<<endl; 
    for(int i=0;i<5;i++)  
    {  
        pos = findSmallest (myarray,i);  
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
    }  
    cout<<"\nDescending Order : ";
    for(int i=0;i<5;i++)  
    {  
        cout<<myarray[i]<<"  ";  
    }  
}  
int findSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<5;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}
