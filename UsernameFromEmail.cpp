#include <bits/stdc++.h>
using namespace std;

int main()
{
	string email;
	cout<<"Enter your E-mail ID: ";
	getline(cin,email);
	int i = (int)email.find('@');
	string userName=email.substr(0,i);
	cout<<"Registration No.: "<<userName<<endl;
	string roll=email.substr(i-2,2);
	cout<<"Roll Number: "<<roll<<endl;
	return 0;
}
