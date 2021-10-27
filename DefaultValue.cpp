#include<iostream>
using namespace std;

//void repchar(char t='*', int q=10);
void repchar(char='&',int=20);

int main()
{
	repchar();
	return 0;
}

void repchar(char ch, int n)
{
	for(int i=0; i<n; i++)
	cout<<ch;
}
