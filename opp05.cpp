//함수 오버로딩 (다중정의)
//같은 동작을 하는 함수인데 매개변수 형탬나 다를 때
//함수 이름을 여러개 만들이 많도록 
#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}
void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}
void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12,15);

	return 0;
}
