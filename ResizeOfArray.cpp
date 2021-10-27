#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter size of Array: ";
	cin>>n;
	int *p;
	p=new int[n];
	for(int i=0; i<n; i++)
	{
	  cout<<"Enter element at index ["<<i<<"]=";
	  cin>>p[i];
    }
    for(int i=0; i<n; i++)
    {
    	cout<<"\nEnter element at index ["<<i<<"]="<<p[i];
	}
	cout<<"\nIncrease the size of array."<<endl;
	int k;
	cout<<"\nEnter new size of array: ";
	cin>>k;
	int *q;
	q=new int[k];
	for(int i=0; i<n; i++)
	q[i]=p[i];
	delete []p;
	p=q;
	q=NULL;
	cout<<"Enter more required elements."<<endl;
	for(int i=n; i<k; i++)
	{
	   cout<<"Enter element at index ["<<i<<"]=";
	   cin>>p[i];
	}
	for(int i=0; i<k; i++)
    {
    	cout<<"\nEnter element at index ["<<i<<"]="<<p[i];
	} 
	return 0;
}
