//cout으로 화면에 출력하기
//C의 printf 대신 cout으로 다양한 자료형을 출력할 때 
#include <iostream>
int main()
{
	int num = 20;
	std::cout << "hello world" << std::endl;
	std::cout << "hello " << "world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}