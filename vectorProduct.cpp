#include<iostream>
using namespace std;
int main()
{
	const int row=4;
	const int col=4;
	int vector[row], product[row];
	int array[row][col];
	int sum=0;
	for(int i=0;i<row;i++)
	   for(int j=0;j<col;j++)
	     cin>>array[i][j];
	     
	for(int i=0;i<row;i++)
	  cin>>vector[i];
	  
	for(int i=0;i<row;i++)
	{
	  for(int j=0;j<col;j++)
	  {
	    sum = sum + (array[i][j]*vector[i]);
	  }
	  product[i]=sum;
	  sum =0;
    }
	for(int i=0;i<row;i++)
	  cout<<product[i]<<"\n";  
	return 0;
}
