//매개변수 자료형으로도 오버로딩하기
#include <iostream>

	void MyFunc(int num)
{
	std::cout << "MyFunc(int) called" << std::endl;
}
	void MyFunc(double num)
{
	std::cout << "MyFunc(double) called" << std::endl;
}

	int main()
{
	MyFunc(10);
	MyFunc(3.123);
	return 0;
}
