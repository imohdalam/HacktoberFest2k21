#include <bits/stdc++.h>
using namespace std;

class sanitizer;

class soap
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	friend sanitizer;
};

class sanitizer
{
	 public:
	 	soap s;
	  void use()
	  {
	  	s.a=121;
	  	s.b=256;
	  	s.c=1024;
	  }
};

int main()
{
	sanitizer s; 
	return 0;
}
