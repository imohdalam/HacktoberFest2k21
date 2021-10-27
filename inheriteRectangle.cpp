#include <bits/stdc++.h>
using namespace std;

class rectangle
{
   int length;
   int breadth;
  public:
  	rectangle(int,int);
  	int getLength();
  	int getBreadth();
  	void setLength(int);
  	void setBreadth(int);
  	int area();
  	int perimeter();
};

rectangle::rectangle(int length=1, int breadth=1)
{
   this->length=length;
   this->breadth=breadth;
}
 
int rectangle::getLength()
{
	return length;
}

int rectangle::getBreadth()
{
	return breadth;
}

void rectangle::setLength(int length)
{
	this->length=length;
}

void rectangle::setBreadth(int breadth)
{
	this->breadth=breadth;
}

int rectangle::area()
{
	return length*breadth;
}

int rectangle::perimeter()
{
	return 2*(length+breadth);
}

// Cubiod class inherited from rectangle
class cuboid:public rectangle
{
	int height; 
   public:
   	cuboid(int,int,int);
   	int getHeight();
   	void setHeight(int);
   	int volume();
};

cuboid::cuboid(int length=1, int breadth=1, int height=1)
{
   this->height=height;
   setLength(length);
   setBreadth(breadth);	
}

int cuboid::getHeight()
{
	return height;
}

void cuboid::setHeight(int height)
{
	this->height=height;
}

int cuboid::volume()
{
	//return getLength()*getBreadth()*height;
	return area()*height;
}

int main()
{
	cuboid c(40);
	cout<<c.volume()<<endl;
	c.setLength(10);
	c.setBreadth(20);
	c.setHeight(30);
	cout<<c.volume()<<endl;
	cout<<c.area()<<endl;
	cout<<c.perimeter()<<endl;
	return 0;
}

