#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class BattleShip {
private:
	char name[10];
	char country[10];
	int hitpoint;
public:
	BattleShip(char aname[10], char acountry[10], int ahitpoint) {
		strcpy(name, aname);
		strcpy(country, acountry);
		hitpoint = ahitpoint;
	}

	void getFire() {
		cout << "함선명: " << name << "가 발포합니다!!" << endl;
	}
};

int main() {
	BattleShip Iowa("아이오와", "미국", 1);
	Iowa.getFire();
	return 0;
}