#include <bits/stdc++.h>
using namespace std;

class myexception1:exception
{
	
};

class myexception2:public myexception1
{
	
};

int main()
{
	try
	{
		//throw 2;
		//throw 'w';
		//throw string("lol");
		//throw 65.55f;
		//throw 532.0263;
		//throw myexception1();
		//throw myexception2();
		//throw true;	 	
	}
	catch(int t)
	{
		cout<<"\ninteger: "<<t<<endl;
	}
	catch(char c)
	{
		cout<<"\ncharacter: "<<c<<endl;
	}
	catch(string s)
	{
		cout<<"\nstring: "<<s<<endl;
	}
	catch(float f)
	{
		cout<<"\nfloat: "<<f<<endl;
	}
	catch(double d)
	{
		cout<<"\ndouble: "<<d<<endl;
	}
	catch(myexception2 n)
	{
		cout<<"\nChild object n"<<endl;
	}
	catch(myexception1 m)
	{
		cout<<"\nParent object m"<<endl;
	}
	catch(bool a)
	{
		cout<<"\nBool: "<<a<<endl;
	}
	catch(...)
	{
		cout<<"\nAny other type"<<endl;
	}
	return 0;
}
