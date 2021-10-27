#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5]={3,8,5,9,6};
	int n;
	for(int i=0; i<5; i++)
	  cout<<a[i]<<" ";
	//cout<<"\nHow many no. of left rotation you want: ";
	cout<<"\nHow many no. of right rotation you want: ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
	  int temp=a[4];
	  for(int i=4; i>0; i--)
	    a[i]=a[i-1];
	  a[0]=temp;
    }
	for(int i=0; i<5; i++)
	  cout<<a[i]<<" ";
	return 0;
}
