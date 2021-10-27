#include<iostream>
using namespace std;
int main()
{
	int i=5;
	while(i)
	{
		switch(i)
		{
			default: cout<<i;
				case 4: cout<<" no ";
				case 5: cout<<i;
					break;
				case 1:
				continue;
				case 2:
				case 3:
				break;
		}
	i--;
	}
  return 6;
}
