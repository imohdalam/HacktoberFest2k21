#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s1[20]="x=20;y=30;z=40;";
	char *token=strtok(s1,";");
	while(token!=NULL)
	{
		cout<<token<<endl;
		token=strtok(NULL,";");
	}
	return 0;
}
