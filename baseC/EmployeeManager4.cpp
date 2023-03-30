#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(char* name) { strcpy(this->name, name); }
	void ShowYourName() const { cout << "name: " << enld; }
	virtual int GetPay() const { return 0; }
	virtual int ShowSalaryInfo() const {}
};

class PermanentWorker : public Employee{};

class TemporaryWorker : public Employee{};

class SalesWorker : public PermanentWorker {};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) { empList[empNum++] = emp; }
	void ShowAllSalaryInfo() const
};








int main()
{

	return 0;
}