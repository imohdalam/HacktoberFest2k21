#include <bits/stdc++.h>
using namespace std;

class car
{
	public:
		virtual void start()
		{
			cout<<"Car started"<<endl;
		}
		virtual void stop()
		{
			cout<<"Car stopped"<<endl;
		}
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
	c=new car();
	c->start();
	c->stop();
	c=new bmw();
	c->start();
	c->stop();
	c=new farrari();
	c->start();
	c->stop();
	return 0;
}
