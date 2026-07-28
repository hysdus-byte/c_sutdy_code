//namespace(이름공간)기초
//서로 다른 그룹에서 같은 이름 함수를 만들어도 충돌 없이 구분해서 쓰고 싶을 때
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수 " << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgComImpl이 정의한 함수 " << std::endl;
	}
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

