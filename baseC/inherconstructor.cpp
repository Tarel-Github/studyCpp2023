#include<iostream>
using namespace std;

class Super {
public:
	Super() {cout << "Super()" << endl;	}
	~Super() {cout << "~Super()" << endl; }
};

class Sub : public Super {
public:
	Sub() {	cout << "Sub" << endl;}
	~Sub() { cout << "~Sub" << endl;}
};

int main() {
	cout << "Start=========================================" << endl;
	Sub obj;
	cout << "Stop==========================================" << endl;

	return 0;
}