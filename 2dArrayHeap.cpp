#include<iostream>
using namespace std;

int main()
{
	int *a[3]; // In stack
	a[0]=new int[4];  // In heap
	a[1]=new int[4];
	a[2]=new int[4];
	
	for(int i=0; i<3; i++)
	 {
	 	for(int j=0; j<4; j++)
	 	  cout<<a[i][j]<<"  ";
	 	  cout<<"\n\n";
	 } 
//////////////////////////////////////////////
	int **c;   // In Stack
	c=new int*[3];   //In Heap
	c[0]=new int[4]; // In Heap
	c[1]=new int[4];
	c[2]=new int[4];
	cout<<"\n\n\n";
	 for(int i=0; i<3; i++)
	 {
	 	for(int j=0; j<4; j++)
	 	  cout<<c[i][j]<<"  ";
	 	  cout<<"\n\n";
	 }
	return 0;
}
