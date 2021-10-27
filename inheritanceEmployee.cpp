#include <bits/stdc++.h>
using namespace std;

class employee
{
	int empId;
	string name;
  public:
  	employee()
  	{
  		empId=0;
  		name="null";
	}
	employee(int empId, string name)
  	{
  		this->empId=empId;
  		this->name=name;
	}
  	int getEmpId()
  	{
  		return empId;
	}
	string getName()
	{
		return name;
	}
};

class fullTimeEmp:public employee
{
	float salary;
   public:
   	fullTimeEmp(int empId, string name, float salary=0):employee(empId, name)
   	{
   		this->salary=salary;
	}
	float getSalary()
	{
		return salary;
    }
};

class partTimeEmp:public employee
{
	float wage;
   public:
   	partTimeEmp(int empId, string name, float wage):employee(empId, name)
   	{
   		this->wage=wage;
	}
	float getSalary()
	{
		return wage;
    }
};

int main()
{
	employee e1;
	cout<<" Name "<<setw(12)<<" ID "<<setw(12)<<" Salary \n"<<endl;
	cout<<e1.getName()<<setw(12)<<e1.getEmpId()<<endl;
	fullTimeEmp e2(101,"allen", 536.55);
	cout<<e2.getName()<<setw(12)<<e2.getEmpId()<<setw(12)<<e2.getSalary()<<endl;
	partTimeEmp e3(201,"bella",41.23);
	cout<<e3.getName()<<setw(12)<<e3.getEmpId()<<setw(12)<<e3.getSalary()<<endl;
	return 0;
}
