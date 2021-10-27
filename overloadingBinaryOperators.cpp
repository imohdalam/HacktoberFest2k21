/* Addition of two complex number
  using operator overloading */

#include <bits/stdc++.h>
using namespace std;

class complexAdd
{
    float x;
    float y;
  public:
  	 complexAdd();
  	 complexAdd(float real, float imaginary)
  	 {
  	 	x= real;
  	 	y= imaginary;
	 }
	 complexAdd operator+(complexAdd);
	 void display();
};

complexAdd::complexAdd()
{
	x=0;
	y=0;
}

complexAdd complexAdd :: operator+(complexAdd c)
{
	complexAdd temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return temp;
}

void complexAdd :: display()
{
	cout<<x<<"+"<<y<<"j"<<endl;
}

int main()
{
	complexAdd c1, c2, c3;
	c1.display();
	c1=complexAdd(2.5,3.2);
	c1.display();
	c2.display();
	c2=complexAdd(5.4,6.4);
	c2.display();
	c3.display();
	c3=c1+c2;
	c3.display();
	return 0;
}
