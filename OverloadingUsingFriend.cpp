#include <bits/stdc++.h>
using namespace std;
#define size 4

class vectorAdd
{
	int v[size];
  public:
   	vectorAdd();
   	vectorAdd(int *x);
   	friend vectorAdd operator*(int, vectorAdd);
   	friend vectorAdd operator*(vectorAdd, int);
   	friend istream & operator >> (istream &, vectorAdd &);
	friend ostream & operator << (ostream &, vectorAdd &);
	~vectorAdd(); 
};

vectorAdd::vectorAdd()
{
	for(int i=0; i<size; i++)
	   v[i]=0;
}

vectorAdd::vectorAdd(int *x)
{
	for(int i=0; i<size; i++)
	  v[i]=x[i];
}

vectorAdd :: ~vectorAdd()
{
	cout<<"\nDestructor called !!!"<<endl;
}

vectorAdd operator*(int a, vectorAdd b)
{
	vectorAdd c;
	for(int i=0; i<size; i++)
	  c.v[i]=a*b.v[i];
	return c;
}

vectorAdd operator*(vectorAdd b, int a)
{
	vectorAdd c;
	for(int i=0; i<size; i++)
	  c.v[i]=a*b.v[i];
	return c;
}

istream & operator >> (istream &dIN, vectorAdd &b)
{
	for(int i=0; i<size; i++)
	 dIN>>b.v[i];
	 return dIN;
}

ostream & operator << (ostream &dOUT, vectorAdd &b)
{
	dOUT<<"{ "<<b.v[0];
	for(int i=1; i<size; i++)
	  dOUT<<", "<<b.v[i];
	dOUT<<" }";
	return dOUT;
}


int main()
{
	int x[]={25,43,74,32};
    vectorAdd m;
	vectorAdd n=x;
	cout<<"\nEnter vector element of <m>: ";
	cin>>m;
	cout<<" m = "<<m<<endl;
	cout<<" n = "<<n<<endl;
	vectorAdd p, q;
	p = 2*m;
	q = n*5;
    cout<<" p = "<<p<<endl;
    cout<<" q = "<<q<<endl;
	return 0;
}
