#include<iostream>
using namespace std;

struct array
{
	int *A;
	int size;
};

void display(struct array s)
{
	for(int i=0; i<s.size; i++)
	{
		cout<<s.A[i]<<"  ";
	}
}

int main()
{
	struct array arr;
	cin>>arr.size;
	arr.A=new int[arr.size];
	for(int i=0; i<arr.size; i++)
	{
		cin>>arr.A[i];
	}
	display(arr);
	return 0;
}
