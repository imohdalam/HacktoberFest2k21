/* Union of two set A and B */

#include <bits/stdc++.h>
using namespace std;

int Union(int a[], int b[], int size1, int size2)
{
	int size3=size1+size2;
	int c[size3];
	int i=0, j=0, k=0;
	while(i<size1 && j<size2)
	{
		if(a[i]<b[j])
		 c[k++]=a[i++];
		else if(b[j]<a[i])
		 c[k++]=b[j++];
		else
		{
			c[k++]=a[i++];
			j++;
		}
	}
	for(;i<size1;i++)
	  c[k++]=a[i]; 
	for(;j<size2;j++)
	  c[k++]=b[j];
	for(int i=0; i<k; i++)
	  cout<<c[i]<<" ";
	  cout<<endl;
}

int Intersection(int a[], int b[], int size1, int size2)
{
	int i=0, j=0, k=0;
	int size3=size1+size1;
	int c[size3];
	while(i<size1 && j<size2)
	{
		if(a[i]!=b[j])
		{
		  i++;
		  j++;
	    }
		else
		{
			c[k++]=a[i++];
			 j++;
		}
	}
	for(int i=0; i<k; i++)
	  cout<<c[i]<<" ";
	  cout<<endl;
}

int Difference(int a[], int b[], int size1, int size2)
{
	int size3=size1+size2;
	int c[size3];
	int i=0, j=0, k=0;
	while(i<size1 && j<size2)
	{
		if(a[i]<b[j])
		 c[k++]=a[i++];
		else if(b[j]<a[i])
		   j++;
		else
		{
			i++;
			j++;
		}
	}
	for(;i<size1;i++)
	  c[k++]=a[i]; 
	for(int i=0; i<k; i++)
	  cout<<c[i]<<" ";
	  cout<<endl;
}

int main()
{
	int a[5]={3,4,5,6,10};
	int b[5]={2,4,5,7,9};
	Union(a,b,5,5);
	Intersection(a,b,5,5);
	Difference(a,b,5,5);
	return 0;
}
