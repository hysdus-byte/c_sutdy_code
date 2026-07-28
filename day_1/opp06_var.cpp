//매개변수 1개짜리 디폴트 매개변수
#include <iostream>

int MyFuncOne(int num = 7)
{
	return num + 1;
}

int main()
{
	std::cout << MyFuncOne() << std::endl;
	std::cout << MyFuncOne(10) << std::endl;
	return 0;
}
