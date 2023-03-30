#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name) { strcpy(this->name, name); }
	void ShowYourName() const { cout << "name: " << name << endl; }
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {}
	int GetPay() const { return salary; }
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) { workTime += time; }
	int GetPay() const { return workTime * payPerHour; }
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker{ 
private:
	int salesResult;	// �� �Ǹ� ����
	double bonusRatio;	// �󿩱� ����
public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesResult(int value) { salesResult += value; }
	int GetPay() const
	{
		return PermanentWorker::GetPay()		// PermanentWorker�� GetPay �Լ� ȣ��
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary:" << GetPay() << endl << endl;		//SalesWorker�� GetPay �Լ� ȣ��
	}
};

class EmployeeHandler {
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) { empList[empNum++] = emp; }
	void ShowAllSalaryInfo() const {/*for (int i = 0; i<empNum; i++) empList[i] -> ShowSalaryInfo();*/}
	void ShowTotalSalary() const
	{
		int sum = 0;
		//for (int i = 0; i<empNum; i++) sum+=empList[i] -> GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler(){	for (int i = 0; i < empNum; i++) delete empList[i];}
};

int main() {
	EmployeeHandler handler;

	//������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}

/*�迭 ������, ������ �迭*/
/*
* �迭 �����ʹ� �������ε� �迭�� ����Ű�� ������
* ������ �迭�� �����ͷ� �̷���� �迭
* 
* 1. ������ �迭
* int n1 = 10, n2 = 20, n3 = 30;
* int ary[3] = {&n, &n2, &n3};
* 
* 2. �迭 ������
* int* pa = &a;					// pa��� �����͸� �����ϰ� a������ �ּڰ��� ����
* int ary[3]; = [1, 2, 3];
* int (* pary) = ary;		// 1���� �迭������, �迭�� �� �̸� ��ü�� �ּұ� ������ ���ٸ� ��ȣ ���� �̷��� �־��ָ� ��
*							//��ȣ�� �־��ִ� ������ �迭�����Ϳ� �Ϲ������͸� �����ϱ� ���ؼ�
*
* int arr[2][3] = {{1,2,3}, {4,5,6}};
* int (*parr)[3] = arr;		// 2���� �迭�� ����Ű�� �迭 ������, 
* 
* 
* 
*/
