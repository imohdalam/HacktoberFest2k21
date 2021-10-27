#include <bits/stdc++.h>
using namespace std;

class base
{
	public:
	int x;
	void show();
};

void base::show()
{
	cout<<"from show x="<<x<<endl;
}

class derived:public base
{
	public:
	int y;
	void display();
};

void derived::display()
{
	cout<<"from display y="<<y<<endl;
	cout<<"from display x="<<x<<endl;	
}

int main()
{
	derived d;
	d.x=90;
	d.y=63;
	d.show();
	d.display();
	return 0;
}
