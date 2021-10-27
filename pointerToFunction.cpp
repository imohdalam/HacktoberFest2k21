#include <bits/stdc++.h>
using namespace std;

bool isPrime(int numIn)
{
	bool isPrime = true;
    if (numIn==0 || numIn==1)
	{
        isPrime = false;
    }
    else
	{
        for (int i=2;i<=numIn/2;++i)
		{
            if(numIn%i==0)
			{
                isPrime=false;
                break;
            }
        }
    }
    return isPrime;
}

void msg()
{
	cout<<"\nEnter number to test primality: ";
}

int max(int x, int y)
{
	return x>y?x:y;
}

int min(int x, int y)
{
	return x<y?x:y;
}

int main()
{
	int num;
	void (*voidPtr)();
	voidPtr=msg;
	(*voidPtr)();
	cin>>num;
	bool (*boolPtr)(int num);
	 boolPtr = isPrime;
	if((*boolPtr)(num)==1)
	   cout<<num<<" is Prime."<<endl;
	else
	  cout<<num<<" is NOT Prime."<<endl;
	int (*intPtr)(int x, int y);
	intPtr=max;
	 cout<<"\nBigger is: "<<(*intPtr)(15,25)<<endl;
	intPtr=min;
	 cout<<"\nSmaller is: "<<(*intPtr)(10,26)<<endl;

	return 0;
}

