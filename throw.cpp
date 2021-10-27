#include <bits/stdc++.h>
using namespace std;

class myexception:exception
{
	public:
		myexception()
		{
			cout<<"\nyep, I will show now."<<endl;
		}
};

double divis(double x, double y)throw(myexception)
{
 /*	if(y==0)
	  throw 503;
	return x/y;  */
	
	if(y!=0)
	 return x/y;
	else
	 throw myexception();
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
	/*catch(string errorCode)
	{
		cout<<endl;
		cout<<"\nError Code: "<<errorCode;
	}*/
	
	catch(myexception)
	{
		cout<<endl;
		cout<<"\nError Code: "<<endl;
	}
	cout<<"\nGood Bye"<<endl;
	return 0;
}
