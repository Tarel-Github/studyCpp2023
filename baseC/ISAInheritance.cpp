#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name){strcpy(owner, name);}
	void Calculate() { cout << "��û ���� ��� ����" << endl; }
};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag) {}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "���� �ʿ�" << endl;
			return;
		}
		cout << "�̵�";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class TabletNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) : NotebookComp(name, initChag) { strcpy(regstPenModel, pen); }
	void Write(const char* penInfo) {
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ���" << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴ�";
			return;
		}
		cout << "�ʱ⳻���� ó���մϴ�" << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TabletNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}



