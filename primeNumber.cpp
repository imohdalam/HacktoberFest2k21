#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count=0;
	cout<<"Enter Number: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		 count++;
	}
	if(count==2)
	  cout<<n<<" is Prime"<<endl;
	else
	  cout<<n<<" is NOT Prime"<<endl;
	return 0;
}
