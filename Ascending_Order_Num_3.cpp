#include<iostream> 
 
using namespace std;  

int findSmallest (int[],int);  
int FindSmallest (int[],int);

int main ()  
{  
    int myarray[5] = {5, 25, 41, -2, 0};  
    int pos,temp;  
    cout<<"First Array List : ";  
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
    cout<<"\nAscending Order : ";
    for(int i=0;i<5;i++)  
    {  
        cout<<myarray[i]<<"  ";  
    }
    
    int myarray1[7] = {98, 21, 101, 56, 8, 11, 8};  
    int pos1,temp1; 
    cout<<"\n\nSecond Array List : ";
	for(int i=0;i<7;i++)  
    {  
        cout<<myarray1[i]<<"  ";  
    }cout<<endl; 
    for(int i=0;i<7;i++)  
    {  
        pos1 = FindSmallest (myarray1,i);  
        temp1 = myarray1[i];  
        myarray1[i]=myarray1[pos1];  
        myarray1[pos1] = temp1; 
    }  
    cout<<"\nAscending Order : ";
    for(int i=0;i<7;i++)  
    {  
        cout<<myarray1[i]<<"  ";  
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
int FindSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<7;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}
