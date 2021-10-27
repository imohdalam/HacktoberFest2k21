#include <bits/stdc++.h>
using namespace std;

int main()
{
	int *arr;
	int size;
	cout<<"\nEnter the size of the integer array: ";
	cin>>size;
	cout<<"\nCreating an array of size "<<size<<endl;
	try
	{
	  arr=new int[size];
    }
    
    catch(bad_alloc)
    {
    	cout<<"\nBad Allocation occurred.."<<endl;
    	return 1;
	}
	cout<<"\nDynamic allocation of memory for array arr is successful."<<endl;
	delete arr;
	return 0;
}
