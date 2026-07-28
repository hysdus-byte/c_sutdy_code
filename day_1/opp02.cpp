//cin으로 두 숫자 입력 받아 덧셈하기 
//C의 scanf대신 cin으로 값을 입력 받을 때
#include <iostream>
int main()
{
	int val1;
	std::cout << "첫 번째 숫자 입력:";
	std::cin >> val1;
	int val2;
	std::cout << "두 번째 숫자 입력:";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	//return 0;
}
