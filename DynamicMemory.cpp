#include<iostream>
using namespace std;

int main()
{
	int *p, n;
	cin>>n;
	p= new int[n];
	for(int i=0; i<n; i++)
	cin>>*(p+i);
	cout<<"\n\n\n"<<endl;
	for(int i=0; i<n; i++)
	cout<<*(i+p)<<" ";
	cout<<p;
	delete []p;
/*	cout<<"\n\n\n"<<endl;
	for(int i=0; i<n; i++)
	cout<<*(i+p)<<" ";*/
	cout<<" "<<p;
	return 0;
}
