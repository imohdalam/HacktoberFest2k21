#include <bits/stdc++.h>
using namespace std;

class base
{
   public:
     virtual void display()
	 {
	 	cout<<"\nFrom Base."<<endl;
	 }	
};

class derived:public base
{
	public:
		void display()
		{
			cout<<"\nFrom Derived."<<endl;
		}
};

int main()
{
   /*	derived *d=new base(); // can't assign base to derived class 
    d->display();*/
    derived d;
    d.display(); //default call
	d.base::display();  // specific calls
	d.derived::display();
	base *b=&d;
	//b=new derived();
	b->display();
	return 0;
}
