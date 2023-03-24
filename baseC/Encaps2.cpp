#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const { cout << "콧물감기 해결" << endl;}
};

class SneezeCap		// 재채기 처치용 캡슐
{
public:
	void Take() const { cout << "재채기 해결" << endl; }
};

class SnuffleCap	// 코막함 처치용 캡슐
{
public:
	void Take() const { cout << "코막힘 해결" << endl; }
};

class CONTAC600
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
};

int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}





