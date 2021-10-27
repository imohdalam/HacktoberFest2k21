#include<bits/stdc++.h>
using namespace std;

int main()
{
	int year;
	cout<<"Enter year: ";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<"leap year"<<endl;
			}
			else
			{
				cout<<"NOT leap year"<<endl;
			}
		}
		else
		{
			cout<<"leap year"<<endl;
		}
	}
	else
	{
		cout<<"NOT leap year"<<endl;
	}
	return 0;
}
