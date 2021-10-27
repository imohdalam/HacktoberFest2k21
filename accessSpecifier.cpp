#include <bits/stdc++.h>
using namespace std;

class base
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	public:
	void setValue()
		{
			a=1;
			b=2;
			c=3;
		}
};

class derived:base
{
	public:
	void modifyValue()
	{
		//a=11; // derived class can't access private data members;
		b=22;
		c=33;
	}
};

int main()
{
	base x;
	//x.a=111; // object can't access private data members;
	//x.b=222; // object can't access protected data members;
	x.c=333;
	return 0;
}
