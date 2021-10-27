#include <bits/stdc++.h>
using namespace std;

class outer
{
    string name;
	class inner
	{
	   public:
		void msg()
		{
		 cout<<"\nI am from Inner class."<<endl;
	    }
	};  
   public:
   	outer()
   	{
   		name="<null>";
	}
   	void display()
   	{
   		inner i;
   		i.msg();
   		cout<<"Hi, "<<name<<endl;
	}
/*	class inner
	{
	   public:
		void msg()
		{
		 cout<<"\nI am from Inner class."<<endl;
	    }
	};  */
//	inner i;
};

int main()
{
	outer o;
	o.display();
//	outer::inner k; // since it is private
	return 0;
}
