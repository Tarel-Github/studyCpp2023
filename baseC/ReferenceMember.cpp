#include<iostream>
using namespace std;

class AAA 
{
public:
	AAA()
	{
		cout << "ºó ¿ÀºêÁ§Æ®" << endl;
	}
	void ShowYourName()
	{
		cout << "ºó ¿ÀºêÁ§Æ®" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;
public:
	BBB(AAA& r, const int& n) :ref(r), num(n)
	{
		// ºó ±¸Á¶Ã¼ ¹Ùµð
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}
