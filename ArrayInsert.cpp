#include<iostream>
using namespace std;

int A[10]={2,3,5,6,5};

void insert(int n, int index)
{
	if(index>=0 || index<=9)
	{
		int i;
		for(i=9; i>index; i--)
		{
			A[i]=A[i-1]; 
		}
		A[i]=n;
	}	
}

void display()
{
	for(int i=0; i<10; i++)
	cout<<A[i]<<" ";
}
int main()
{
	int n, index;
	cout<<"Enter the Number: ";
	cin>>n;
	cout<<"\nInsert at what index: ";
	cin>>index;
	insert(n,index);
	display();
	return 0;
}
