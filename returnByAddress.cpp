#include <bits/stdc++.h>
using namespace std;

int& fun(int size)
{
	int *p=new int[size];
	cout<<p<<endl;
	for(int i=0; i<size; i++)
	  p[i]=i+13;
	return p;
}
int main()
{
	int *p=fun(5);
	cout<<p<<endl;
	for(int i=0; i<5; i++)
	 cout<<*(i+p)<<endl;
	return 0;
}
