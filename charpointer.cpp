#include <bits/stdc++.h>
using namespace std;

char* allocateMemory();

int main() 
{
    char* str;
    str = allocateMemory();
    cout<<str<<endl;
    delete str;
    // str = "And, I am in main()";
    //cout<<str<<endl;
    return 0;
}

char* allocateMemory()
{
   char* str = "Hey, I am in the allocateMemory()";
    return str;
}
