#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum=0;
    cout<<"Enter Number: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		 sum+=i;
	}	
	if(sum==2*n)
	  cout<<n<<" is Perfect Number"<<endl;
	else
	  cout<<n<<" is NOT Perfect Number"<<endl;
	return 0;
}
