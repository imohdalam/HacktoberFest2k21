#include <bits/stdc++.h>
using namespace std;

int& fun(int& size)
{
	return size;
}

int main()
{
	int x=5;
	fun(x)=150;
	cout<<x<<endl;
	cout<<fun(x)<<endl;
	x=263;
	cout<<fun(x)<<endl;
	return 0;
}
