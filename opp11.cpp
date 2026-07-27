//bool을 반환하는 함수로 양수/ 음수 판별하기
//참/거짓 판단 결과 자체를 함수의 반환 값으로 그대로 돌려주고 싶을 때(bool 반환 함수)

#include <iostream>

using namespace std;

bool IsPositive(int num)
{
	if (num < 0) {
		return false;
	}
	else {
		return true;
	}
}
int main()
{
	bool isPos;
	int num;
	cout << "Input number : ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) {
		cout << "Positive number" << endl;
	}
	else {
		cout << "Negative number" << endl;
	}
	return 0;
}
