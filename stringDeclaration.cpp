#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[]={'g','r','e','a','t','\0'};
	cout<<s<<endl;
	char a[10]="AWS \0";
	cout<<a<<endl;
	const char *z="zgreat";
	cout<<z<<endl;
	//char q[200];
	//cin.get(q,200);
	//cout<<q<<endl;
	//cout<<"Length: "<<strlen(q)<<endl;
	//strncat(a,z,5);
	//cout<<a<<endl;
	//strncpy(a,z,1);
	//cout<<a<<endl;
	//char d[]="l";
	//cout<<strstr(s,d);
	//char d[]="r";
	//cout<<(string*)strchr(s,'b');
	cout<<strcmp(s,z);
	return 0;
}
