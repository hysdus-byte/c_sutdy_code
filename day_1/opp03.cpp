//두 수 사이의 정수 합 구하기 
//입력 순서에 상관없이 두 수 사이에 값을 계산해야할때(if-else + for문조합)
#include <iostream>
int main()
{
	int val1, val2;
	int result = 0;

	std::cout << "두개의 숫자입력:";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}