#include<bits/stdc++.h>
using namespace std;

int RecursiveSum(int a[], int n)
{
   	if(n<=0)
   	 return 0;
   	else
   	 return a[n-1] + RecursiveSum(a,n-1);
}

int main()
{
	int sum=0, n=6;
    int a[6]={10,20,30,40,50,60};
    cout<<RecursiveSum(a,n);	
	return 0;
}
