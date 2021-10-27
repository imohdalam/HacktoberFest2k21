#include <iostream>
using namespace std;

int main()
{
	char givenChar;
	cin>>givenChar;
	cout<<"Value = "<<(char)givenChar<<endl;
	cout<<"Address = "<<(void*)&givenChar<<endl;
	return 0;
}
