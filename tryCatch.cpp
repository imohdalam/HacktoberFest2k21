#include <bits/stdc++.h>
using namespace std;

double divis(double x, double y)
{
 /*	if(y==0)
	  throw 503;
	return x/y;  */
	
	if(y!=0)
	 return x/y;
	else
	 throw string("Bad Gateway");
  //	 cout<<"\nLwfeuigvehc"; // after thrown nothing will execute
}

int main()
{
	double a,b;
	cout<<"\n\n------Division------\n\n"<<endl;
	cout<<"\nEnter a: ";cin>>a;
	cout<<"\nEnter b: ";cin>>b;
	try
	{
	/*    if(b==0)
		  throw 503;  */
    //    int c=a/b;
		double c=divis(a,b);
		cout<<"\nAnswer= "<<c<<endl;
	}
	catch(string errorCode)
	{
		cout<<endl;
		cout<<"\nError Code: "<<errorCode;
	}
	cout<<"\nGood Bye"<<endl;
	return 0;
}
