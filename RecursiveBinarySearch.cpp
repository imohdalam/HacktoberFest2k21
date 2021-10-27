#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int array[], int size)
{
   int i, j, imin;
   for(i = 0; i<size-1; i++) 
   {
      imin = i;
      for(j = i+1; j<size; j++)
      {
         if(array[j] < array[imin])
            imin = j;
      }
         swap(array[i], array[imin]);
   }
}

int RecursiveBinarySearch(int array[], int l, int h, int key)
{
	int mid;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==array[mid])
		 return mid;
		else if(key<array[mid])
		  return RecursiveBinarySearch(array,l,mid-1,key);
		else
		  return RecursiveBinarySearch(array,mid+1,h,key);
	}
	return -1;
}

int main()
{
	int n, temp, key;
	cout<<"\nEnter the size of array: ";
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++)
	{
	  cout<<"\nEnter the element index["<<i<<"] = ";
	  cin>>array[i];
    }
	cout<<"\nArray Created and elements are inserted Successfully"<<endl;
	SelectionSort(array,n);
	cout<<"\nArray Sorted Successfully"<<endl;
	cout<<"\nEnter the element for search: ";
	cin>>key;
    temp = RecursiveBinarySearch(array,0,n-1,key);
	if(temp==-1)
	  cout<<"\nElement NOT found"<<endl;
	else
	  cout<<"\nElement found at index["<<temp<<"]"<<endl;
	return 0;
}
