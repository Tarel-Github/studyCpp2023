#include<iostream>

template <typename T>			// 클래스 템플릿 일반화
class CTest {
private:
	T data;
public:
	CTest(T adata) : data(adata) {}
	getData() {
		return data;
	}
};

template<>						// 클래스 템플릿 특수화
class CTest<char> {
private:
	char data;
public:
	CTest(char adata) : data(adata){}
	char getData() { return data; }
};


int main()
{
	CTest<int> obj(10);
	std::cout << obj.getData() << std::endl;
	CTest<char> obj1('a');
	std::cout << obj1.getData() << std::endl;
	return 0;
}