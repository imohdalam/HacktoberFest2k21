#include <bits/stdc++.h>
using namespace std;

class minuss
{
   int x;
   int y;
   int z;
  public:
    void set(int a, int b, int c);
	void display();
	void operator-();	
};

void minuss :: set(int a, int b, int c)
{
	x=a;
	y=b;
	z=c;
}

void minuss :: display()
{
	cout<<"x="<<x<<" ";
	cout<<"y="<<y<<" ";
	cout<<"z="<<z<<" ";
}

void minuss :: operator-()
{
	x=-x;
	y=-y;
	z=-z;
}

//Driver
int main()
{
	minuss s1;
	s1.set(45,-96,32);
	s1.display();
	-s1;
	s1.display();
	return 0;
}
