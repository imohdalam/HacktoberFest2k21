#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=0; i<=500; i++)
	{
		int r, n, sum=0;
		n=i;
	   while(n>0)
	   {
		  r=n%10;
		  n=n/10;
		  sum+=r*r*r;
	   }
	  if(sum==i)
	    cout<<i<<" is a Amongstrom\n"<<endl;
	}
	return 0;
}
