//using namespace로 소속 생략하기
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
	using namespace ProgComImpl; // ProgComImpl만 생략 가능하게 함

	SimpleFunc();				 // ProgComImpl::SimpleFunc() 호출됨
	BestComImpl::SimpleFunc();	 // 이쪽은 여전히 :: 명시해야함 

	return 0;
}