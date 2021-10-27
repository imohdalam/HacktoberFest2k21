#include <bits/stdc++.h>
using namespace std;

class test
{
   int code;
   static int count;
  public:
    static void showcount()
    {
    	cout<<"Count="<<count<<endl;
	}
	void showcode()
	{
		cout<<"Code="<<code<<endl;
	}
	void putdata()
	{
		code = ++count;
	}
};

int test::count;

int main()
{
	test t1, t2;
	t1.putdata();
	t2.putdata();
	t1.showcode();
	t2.showcode();
	test::showcount();
	return 0;
}
