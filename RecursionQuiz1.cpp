#include<iostream>
using namespace std;

inline int fun(int n)
{
	int x=1;
	if(n==1)
	return x;
	for(int k=1; k<n; k++)
	{
		x=x+fun(k)*fun(n-k);
	}
	return x;
}

int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}
