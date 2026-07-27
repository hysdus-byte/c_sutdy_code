//디폴트 매개변수 2개 함께쓰기
//매개변수 여러개에 각각 기본값을 지정해서, 인자를 0개/1개/2개 중 몇개를 주든
//동작하는 함수를 만들 때
#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;

	return 0;
}
