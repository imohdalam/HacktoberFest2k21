#include <bits/stdc++.h>
using namespace std;

class rectangle
{
	int length;
	int breadth;
  public:
  /*	rectangle()
	{
		length=1;
		breadth=1;
	} */
	rectangle(int l=1, int b=1)
	{
		length=l;
		breadth=b;
	}
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
	rectangle(rectangle & newrect)
	{
		length=newrect.length;
		breadth=newrect.breadth;
	}
};


int main()
{
	rectangle r;
	rectangle *p, *q;
	p=new rectangle;
	q=new rectangle;
//	p->length=12;
//	p->breadth=5;
	cout<<q->area()<<endl;
	cout<<p->area()<<endl;
	cout<<r.area()<<endl;
	rectangle t(r);
	cout<<t.area()<<endl;
	return 0;
}
