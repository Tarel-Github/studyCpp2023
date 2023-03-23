#include "compile.h"

void MyClass::set(int n) {
	m_num = n;
}

void MyClass::get() {
	std::cout << "m_num: " << m_num << std::endl;
}