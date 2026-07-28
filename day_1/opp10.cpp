//bool자료형, while(true) + break,sizeof
//참/거짓을 나타내는 값을 다룰 때, 반복 횟수를 코드 중간에 직접 정하고 싶을때
//자료형이 메모리를 얼마나 차지하는지 확인하고 싶을 때
#include <iostream>
using namespace std;
int main()
{
	int num = 10;
	int i = 0;
	cout << "true: " << true << endl;
	cout << "false: " << false << endl;
	while (true)
	{
			cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true : " << sizeof(true) << endl;
	cout << "sizeof false : " << sizeof(true) << endl;

	return 0;
}