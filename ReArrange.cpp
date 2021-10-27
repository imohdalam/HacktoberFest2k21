#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10]={0,-8,9,5,2,0,-6,7,-17,3};
	int i=0;
	int j=9;
	while(i<j)
	{
	  while(a[i]<0)
	  {
		i++;
	  }
	  while(a[j]>=0)
	  {
		j--;
      }
      if(i<j)
      {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
	for(int i=0; i<10; i++)
	  cout<<a[i]<<" ";
	return 0;
}
