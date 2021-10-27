#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

ostream & symbol(ostream & output)  // user defined manipulator 
	{
		cout<<setprecision(6);
		return output<<"Rs. ";
	}

int main()
{
	float Basic=9556.23545;
	float Allowance=66.23;
	float fare=123.49;
	float total=25643.012;
	cout<<setw(10)<<"Basic"<<setw(10)<<symbol<<Basic<<endl;
	cout<<setw(10)<<"Allowance"<<setw(10)<<symbol<<Allowance<<endl;
	cout<<setw(10)<<"fare"<<setw(10)<<symbol<<fare<<endl;
	cout<<setw(10)<<"total"<<setw(10)<<symbol<<total<<endl;
	return 0;
}
