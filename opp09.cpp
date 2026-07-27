//중첩 namespace와 별칭(alias)
//이름공간 안에 이름공간을 겹겹이 두어 더 세밀하게 그룹을 나누고 싶을때
//그리고 그 긴경로에 짧은 별명을 붙이고 싶을 때
#include <iostream>
usung namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}
int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;

	cout << ABC::num1::endl;
	cout << ABC::num2::endl;

	return 0;
}