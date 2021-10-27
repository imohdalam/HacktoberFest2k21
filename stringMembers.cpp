#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1="Time&";
	string s2="Space";
	cout<<s1.length()<<endl;
	cout<<s2.size()<<endl;
	s1.resize(100);
	cout<<s1.capacity()<<endl;
	//s1.max_size();
	cout<<s1.capacity()<<endl;
	cout<<s1<<endl;
	s1.clear();
	cout<<s1<<endl;
	if(s1.empty())
	  cout<<"S1 is empty."<<endl;
	else
	  cout<<"S1 is "<<s1<<endl;
	return 0;
}
