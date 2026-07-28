//삼항 연산자를 활용한 lnline 함수
#include <iostream>

inline int Max(int a, int b)
{
	return a > b ? a : b;
}

inline int Min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	std::cout << "Max: " << Max(7, 3) << std::endl;
	std::cout << "Max: " << Min(7, 3) << std::endl;

	return 0;
}

