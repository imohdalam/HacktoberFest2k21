#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, rem, rev=0;
	cout<<"Enter Number: ";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	do
	{
		rem=rev%10;
		rev=rev/10;
		switch(rem)
		{
			case 0: cout<<" Zero"; break;
			case 1: cout<<" One"; break;
			case 2: cout<<" Two"; break;
			case 3: cout<<" Three"; break;
			case 4: cout<<" Four"; break;
			case 5: cout<<" Five"; break;
			case 6: cout<<" Six"; break;
			case 7: cout<<" Seven"; break;
			case 8: cout<<" Eight"; break;
			case 9: cout<<" Nine"; break;
		}
	}while(rev>0);
	
	return 0;
}
