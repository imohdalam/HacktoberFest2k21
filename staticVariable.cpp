#include <bits/stdc++.h>
using namespace std;

class student
{
	int roll;
	static int regNo;
	string name;
   public:
   	student()
   	{
   		roll=++regNo;
	}
	void getRoll()
	{
		cout<<"\nHi, "<<name<<" your roll: "<<roll<<endl;;
	}
	void setName(string name)
	{
		this->name=name;
	}
};

int student::regNo=0;

int main()
{
	cout<<"\n\n------Addmission Open-------\n\n"<<endl;
	for(int i=0;i<100;i++)
	{
	 student s;
	 string name;
	 cout<<"\nEnter your name: ";cin>>name;
	 s.setName(name);
	 s.getRoll();
    }
   cout<<"\n\n--------Addmission Closed---------\n\n"<<endl;
	return 0;
}
