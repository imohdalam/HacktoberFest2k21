#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
	if(n>0)
	{
	  TOH(n-1,A,C,B);
      cout<<"Move a Disk from "<<A<<" to "<<C<<endl;	
	  TOH(n-1,B,A,C);
    }
}

int main()
{
	long long int n;
	char A ='A', B='B', C='C';
	cout<<"Enter number of Disk: ";
	cin>>n;
	TOH(n,A,B,C);
	return 0;
}
