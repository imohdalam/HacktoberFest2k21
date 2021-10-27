#include <bits/stdc++.h>
using namespace std;

int main()
{
	int array1[5]={2,5,7,9,11};
	
	int array2[5]={3,10,10,16,20};
	int array3[10];
	int i=0, j=0, k=0;
	while(i<5 && j<5)
	{
		if(array1[i]<array2[j])
		   array3[k++]=array1[i++];
		else
		  array3[k++]=array2[j++];
	}
		for(; i<5; i++)
		  array3[k++]=array1[i];
		for(; j<5; j++)
		  array3[k++]=array2[j];
	for(int i=0; i<10; i++)
	  cout<<array3[i]<<" ";
	return 0;
}
