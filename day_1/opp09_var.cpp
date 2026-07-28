//using 선언으로 이름 하나만 꺼내 쓰기
#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1 = 100;
			int num2 = 200;
		}
	}
}
int main()
{
	using AAA::BBB::CCC::num1;

	cout << num1 << endl;
	cout << AAA::BBB::CCC::num2 << endl;

	return 0;
}

