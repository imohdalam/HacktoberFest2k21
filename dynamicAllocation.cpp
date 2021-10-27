/* Modifying the size of array in a program 
  is called dynamic memory allocation. */



#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cout<<"\nEnter the size of Array: ";
	cin>>size;
	int *ptr;
	ptr = new int [size];
	for(int i=0; i<size; i++)
	  cin>>ptr[i];
	for(int i=0; i<size; i++)
	  cout<<--ptr[i];
	 cout<<"\nEnter new size of Array: ";
	 cin>>size;
	delete []ptr;
	ptr= NULL;
	ptr = new int [size];
	for(int i=0; i<size; i++)
	  cin>>ptr[i];
	for(int i=0; i<size; i++)
	  cout<<++ptr[i];
	 delete []ptr;
	return 0;
}
