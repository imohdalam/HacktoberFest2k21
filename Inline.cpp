#include<iostream>
using namespace std;

inline int fact(int n)
{
	if(n==1 || n==0)
	 return 1;
	else
	  return fact(n-1)*n;
}

int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}
