#include <bits/stdc++.h>
using namespace std;

template <class t>
t maxNum(t x, t y)
{
	if(x>y)
	  return x;
	else
	  return y;
}

int main()
{
	int c = maxNum(10,5);
	float d = maxNum(10.5f,6.9f);
	cout<<c<<endl;
	cout<<d<<endl;
	return 0;
}
