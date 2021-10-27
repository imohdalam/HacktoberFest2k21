#include <bits/stdc++.h>
using namespace std;

class car // an abstract class // since all are pure virtual fxn called as interfaces
{
	public:
		virtual void start()=0;  // pure virtual fxn
		virtual void stop()=0;
};

class bmw:public car
{
  public:
    void start()
	{
		cout<<"BMW started"<<endl;
	}	
	void stop()
	{
		cout<<"BMW stopped"<<endl;
	}
};

class farrari:public car
{
	public:
		void start()
		{
			cout<<"FARRARI started"<<endl;
		}
		void stop()
		{
			cout<<"FARRARI stopped"<<endl;
		}
};

int main()
{
	car *c;
	c=new bmw();
	c->start();
	c->stop();
	c=new farrari();
	c->start();
	c->stop();
	return 0;
}
