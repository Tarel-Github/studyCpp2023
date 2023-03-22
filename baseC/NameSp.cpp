#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}


int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom에서 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom에서 정의한 함수" << std::endl;
}