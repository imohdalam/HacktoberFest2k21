#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class PiggyBank
{
 private:
     int no_500;
     int no_200;
     int no_100;
 public:
    PiggyBank(int n500,int n200,int n100)
    {
        no_500=n500;
        no_200=n200;
        no_100=n100;
    }
    void addMoney(int a,int b,int c);
    void takeOutMoney(int amt);
    void exchange(int rup);
    void Display();
};
void PiggyBank::addMoney(int a,int b,int c)
{
    no_500+=a;
    no_200+=b;
    no_100+=c;
}
void PiggyBank::takeOutMoney(int amt)
{
    int t=no_500*500+no_200*200+no_100*100;
    int a,b,c;
    cout<<"enter the number of 500 , 200 , 100 notes"<<endl;
    cin>>a>>b>>c;
    if(amt>t)
        cout<<"Insufficient balance"<<endl;
    else
    {
        if(a>no_500 || b>no_200 || c>no_100)
           cout<<"Error : enter correct number of notes"<<endl;
        else
        {
            no_500-=a;
            no_200-=b;
            no_100-=c;
        }
    }
}
void PiggyBank::exchange(int rup)
{
    int t=no_500*500+no_200*200+no_100*100;
    int a,b;
    cout<<"enter the number of 500 , 200 notes to exchange"<<endl;
    cin>>a>>b;
    if(rup>t)
        cout<<"Insufficient balance"<<endl;
    else
    {
        if(a>min(no_200/2,no_100))
           cout<<"Error : enter correct number of notes"<<endl;
        else
        {
            no_500+=a;
            no_200-=2*a+b;
            no_100-=2*b;
        }
    }
}
void PiggyBank::Display()
{
    int t=no_500*500+no_200*200+no_100*100;
    cout<<"the purse content is: "<<endl;
    cout<<" the 500 notes = "<<no_500<<endl;
    cout<<" the 200 notes = "<<no_200<<endl;
    cout<<" the 100 notes = "<<no_100<<endl;
    cout<<" total amount = "<<t<<endl;
}
int menu()
{

    cout<<"Enter your choice"<<endl;

    cout<<"1- Add money"<<endl;
    cout<<"2- Take out money"<<endl;
    cout<<"3- exchange"<<endl;
    cout<<"4- Display"<<endl;
    cout<<"5- exit"<<endl;
    int n;
    cin>>n;
    return n;
}
int main()
{
    int a,b,c;
    cout<<"enter the current number of notes in purse 500 , 200 , 100 "<<endl;
    cin>>a>>b>>c;
    PiggyBank obj(a,b,c);
    while(1){
    switch(menu())
    {
        case 1: {
            int a,b,c;
            cout<<"enter the number of 500 , 200 , 100 notes to be added "<<endl;
            cin>> a>>b>>c;
            obj.addMoney(a,b,c);
            break;
        }
        case 2:
            {
            int amt;
            cout<<"enter amount to take out"<<endl;
            cin>>amt;
            obj.takeOutMoney(amt);
            break;
        }
        case 3: {
            int n;
            cout<<"enter ruppees to exchange"<<endl;
            cin>>n;
            obj.exchange(n);
            break;
        }
        case 4:
          obj.Display();
          break;
        case 5:
         exit(0);
         break;
     }
    }
    return 0;
}
