#include <bits/stdc++.h>
using namespace std;

int maxNum(int a=0, int b=0, int c=0)
{
	return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
	cout<<maxNum()<<endl;
	cout<<maxNum(56)<<endl;
	cout<<maxNum(59,33)<<endl;
	cout<<maxNum(37,95,667)<<endl;
	return 0;
}
