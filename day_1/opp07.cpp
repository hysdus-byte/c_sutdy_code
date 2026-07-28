//inline 함수 
//짧고 자주 호출되는 함수에서, 함수 호출에 드는 비용(오버헤드)을 없애고 싶을 때
#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}
int main()
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
