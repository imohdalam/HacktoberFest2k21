#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s1[]="100";
	char s2[]="3.14";
	long int x=strtol(s1,NULL,10);
	float y=strtof(s2,NULL);
	cout<<x<<endl;
	cout<<y*1/3.14<<endl;
	
	return 0;
}
