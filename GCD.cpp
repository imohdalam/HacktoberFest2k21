#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	cout<<"Enter 1st number: ";
	cin>>m;
	cout<<"\nEnter 2nd number: ";
	cin>>n;
	while(m!=n)
	{
		if(m>n)
		{
			m=m-n;
		}
		else
		{
			n=n-m;
		}
	}
	cout<<"\nGCD="<<m;
	return 0;
}
