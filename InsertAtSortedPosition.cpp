#include <bits/stdc++.h>
using namespace std;

int InsertAtSortedPosition(int a[], int x, int length)
{
   int i=length-1;
   while(i>=0 && a[i]>x)
   {
   	  a[i+1]=a[i];
   	  i--;
   }
   a[i+1]=x;
   for(int i=0; i<length+1; i++)
	  cout<<a[i]<<" ";	
}

int main()
{
	int a[5]={5,8,13,19,20};
	InsertAtSortedPosition(a,10,5);
	return 0;
}
